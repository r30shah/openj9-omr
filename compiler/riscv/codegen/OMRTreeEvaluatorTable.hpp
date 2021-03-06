/*******************************************************************************
 * Copyright (c) 2019, 2020 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/
/*
 * This table is #included in a static table.
 * Only Function Pointers are allowed.
 */


#define _BadILOpEvaluator unImpOpEvaluator 
#define _aconstEvaluator aconstEvaluator
#define _iconstEvaluator iconstEvaluator
#define _lconstEvaluator lconstEvaluator
#define _fconstEvaluator fconstEvaluator
#define _dconstEvaluator dconstEvaluator
#define _bconstEvaluator bconstEvaluator
#define _sconstEvaluator sconstEvaluator
#define _iloadEvaluator iloadEvaluator
#define _floadEvaluator floadEvaluator
#define _dloadEvaluator dloadEvaluator
#define _aloadEvaluator aloadEvaluator
#define _bloadEvaluator bloadEvaluator
#define _sloadEvaluator sloadEvaluator
#define _lloadEvaluator lloadEvaluator
#define _irdbarEvaluator unImpOpEvaluator
#define _frdbarEvaluator unImpOpEvaluator
#define _drdbarEvaluator unImpOpEvaluator
#define _ardbarEvaluator unImpOpEvaluator
#define _brdbarEvaluator unImpOpEvaluator
#define _srdbarEvaluator unImpOpEvaluator
#define _lrdbarEvaluator unImpOpEvaluator
#define _iloadiEvaluator iloadEvaluator
#define _floadiEvaluator floadEvaluator
#define _dloadiEvaluator dloadEvaluator
#define _aloadiEvaluator aloadEvaluator
#define _bloadiEvaluator bloadEvaluator
#define _sloadiEvaluator sloadEvaluator
#define _lloadiEvaluator lloadEvaluator
#define _irdbariEvaluator unImpOpEvaluator
#define _frdbariEvaluator unImpOpEvaluator
#define _drdbariEvaluator unImpOpEvaluator
#define _ardbariEvaluator unImpOpEvaluator
#define _brdbariEvaluator unImpOpEvaluator
#define _srdbariEvaluator unImpOpEvaluator
#define _lrdbariEvaluator unImpOpEvaluator
#define _istoreEvaluator istoreEvaluator
#define _lstoreEvaluator lstoreEvaluator
#define _fstoreEvaluator fstoreEvaluator
#define _dstoreEvaluator dstoreEvaluator
#define _astoreEvaluator lstoreEvaluator
#define _bstoreEvaluator bstoreEvaluator
#define _sstoreEvaluator sstoreEvaluator
#define _iwrtbarEvaluator unImpOpEvaluator
#define _lwrtbarEvaluator unImpOpEvaluator
#define _fwrtbarEvaluator unImpOpEvaluator
#define _dwrtbarEvaluator unImpOpEvaluator
#define _awrtbarEvaluator unImpOpEvaluator
#define _bwrtbarEvaluator unImpOpEvaluator
#define _swrtbarEvaluator unImpOpEvaluator
#define _lstoreiEvaluator lstoreEvaluator
#define _fstoreiEvaluator fstoreEvaluator
#define _dstoreiEvaluator dstoreEvaluator
#define _astoreiEvaluator lstoreEvaluator
#define _bstoreiEvaluator bstoreEvaluator
#define _sstoreiEvaluator sstoreEvaluator
#define _istoreiEvaluator istoreEvaluator
#define _lwrtbariEvaluator unImpOpEvaluator 
#define _fwrtbariEvaluator unImpOpEvaluator 
#define _dwrtbariEvaluator unImpOpEvaluator 
#define _awrtbariEvaluator unImpOpEvaluator 
#define _bwrtbariEvaluator unImpOpEvaluator 
#define _swrtbariEvaluator unImpOpEvaluator 
#define _iwrtbariEvaluator unImpOpEvaluator 
#define _GotoEvaluator gotoEvaluator
#define _ireturnEvaluator ireturnEvaluator
#define _lreturnEvaluator lreturnEvaluator
#define _freturnEvaluator freturnEvaluator
#define _dreturnEvaluator dreturnEvaluator
#define _areturnEvaluator lreturnEvaluator
#define _ReturnEvaluator returnEvaluator
#define _asynccheckEvaluator unImpOpEvaluator 
#define _athrowEvaluator unImpOpEvaluator 
#define _icallEvaluator directCallEvaluator
#define _lcallEvaluator directCallEvaluator
#define _fcallEvaluator directCallEvaluator
#define _dcallEvaluator directCallEvaluator
#define _acallEvaluator directCallEvaluator
#define _callEvaluator directCallEvaluator
#define _iaddEvaluator iaddEvaluator
#define _laddEvaluator laddEvaluator 
#define _faddEvaluator faddEvaluator
#define _daddEvaluator daddEvaluator
#define _baddEvaluator iaddEvaluator 
#define _saddEvaluator iaddEvaluator 
#define _isubEvaluator isubEvaluator
#define _lsubEvaluator lsubEvaluator 
#define _fsubEvaluator fsubEvaluator
#define _dsubEvaluator dsubEvaluator
#define _bsubEvaluator isubEvaluator 
#define _ssubEvaluator isubEvaluator 
#define _asubEvaluator unImpOpEvaluator 
#define _imulEvaluator imulEvaluator
#define _lmulEvaluator imulEvaluator 
#define _fmulEvaluator fmulEvaluator
#define _dmulEvaluator dmulEvaluator
#define _bmulEvaluator imulEvaluator 
#define _smulEvaluator imulEvaluator 
#define _idivEvaluator idivEvaluator
#define _ldivEvaluator ldivEvaluator
#define _fdivEvaluator fdivEvaluator
#define _ddivEvaluator ddivEvaluator
#define _bdivEvaluator idivEvaluator 
#define _sdivEvaluator idivEvaluator 
#define _iudivEvaluator iudivEvaluator 
#define _ludivEvaluator ludivEvaluator 
#define _iremEvaluator iremEvaluator
#define _lremEvaluator lremEvaluator
#define _fremEvaluator unImpOpEvaluator 
#define _dremEvaluator unImpOpEvaluator 
#define _bremEvaluator iremEvaluator 
#define _sremEvaluator iremEvaluator 
#define _iuremEvaluator iuremEvaluator 
#define _inegEvaluator inegEvaluator
#define _lnegEvaluator inegEvaluator
#define _fnegEvaluator fnegEvaluator
#define _dnegEvaluator dnegEvaluator
#define _bnegEvaluator unImpOpEvaluator 
#define _snegEvaluator unImpOpEvaluator 
#define _iabsEvaluator iabsEvaluator
#define _labsEvaluator labsEvaluator
#define _fabsEvaluator fabsEvaluator
#define _dabsEvaluator dabsEvaluator
#define _ishlEvaluator ishlEvaluator
#define _lshlEvaluator ishlEvaluator
#define _bshlEvaluator ishlEvaluator 
#define _sshlEvaluator ishlEvaluator 
#define _ishrEvaluator ishrEvaluator
#define _lshrEvaluator ishrEvaluator
#define _bshrEvaluator ishrEvaluator 
#define _sshrEvaluator ishrEvaluator 
#define _iushrEvaluator iushrEvaluator
#define _lushrEvaluator iushrEvaluator
#define _bushrEvaluator iushrEvaluator 
#define _sushrEvaluator iushrEvaluator 
#define _irolEvaluator irolEvaluator
#define _lrolEvaluator irolEvaluator
#define _iandEvaluator iandEvaluator 
#define _landEvaluator iandEvaluator 
#define _bandEvaluator iandEvaluator 
#define _sandEvaluator iandEvaluator 
#define _iorEvaluator iorEvaluator 
#define _lorEvaluator iorEvaluator 
#define _borEvaluator iorEvaluator 
#define _sorEvaluator iorEvaluator 
#define _ixorEvaluator ixorEvaluator 
#define _lxorEvaluator ixorEvaluator 
#define _bxorEvaluator ixorEvaluator 
#define _sxorEvaluator ixorEvaluator 
#define _i2lEvaluator i2lEvaluator
#define _i2fEvaluator i2fEvaluator 
#define _i2dEvaluator i2dEvaluator 
#define _i2bEvaluator l2iEvaluator
#define _i2sEvaluator l2iEvaluator
#define _i2aEvaluator unImpOpEvaluator 
#define _iu2lEvaluator iu2lEvaluator
#define _iu2fEvaluator unImpOpEvaluator 
#define _iu2dEvaluator unImpOpEvaluator 
#define _iu2aEvaluator unImpOpEvaluator 
#define _l2iEvaluator l2iEvaluator
#define _l2fEvaluator l2fEvaluator 
#define _l2dEvaluator l2dEvaluator 
#define _l2bEvaluator l2iEvaluator
#define _l2sEvaluator l2iEvaluator
#define _l2aEvaluator passThroughEvaluator
#define _lu2fEvaluator unImpOpEvaluator 
#define _lu2dEvaluator unImpOpEvaluator 
#define _lu2aEvaluator passThroughEvaluator
#define _f2iEvaluator f2iEvaluator 
#define _f2lEvaluator f2lEvaluator 
#define _f2dEvaluator f2dEvaluator 
#define _f2bEvaluator unImpOpEvaluator 
#define _f2sEvaluator unImpOpEvaluator 
#define _d2iEvaluator d2iEvaluator 
#define _d2lEvaluator d2lEvaluator 
#define _d2fEvaluator d2fEvaluator 
#define _d2bEvaluator unImpOpEvaluator 
#define _d2sEvaluator unImpOpEvaluator 
#define _b2iEvaluator b2iEvaluator
#define _b2lEvaluator b2lEvaluator
#define _b2fEvaluator unImpOpEvaluator 
#define _b2dEvaluator unImpOpEvaluator 
#define _b2sEvaluator unImpOpEvaluator 
#define _b2aEvaluator unImpOpEvaluator 
#define _bu2iEvaluator bu2iEvaluator
#define _bu2lEvaluator bu2lEvaluator
#define _bu2fEvaluator unImpOpEvaluator 
#define _bu2dEvaluator unImpOpEvaluator 
#define _bu2sEvaluator unImpOpEvaluator 
#define _bu2aEvaluator unImpOpEvaluator 
#define _s2iEvaluator s2iEvaluator
#define _s2lEvaluator s2lEvaluator
#define _s2fEvaluator unImpOpEvaluator 
#define _s2dEvaluator unImpOpEvaluator 
#define _s2bEvaluator unImpOpEvaluator 
#define _s2aEvaluator unImpOpEvaluator 
#define _su2iEvaluator su2iEvaluator
#define _su2lEvaluator su2lEvaluator
#define _su2fEvaluator unImpOpEvaluator 
#define _su2dEvaluator unImpOpEvaluator 
#define _su2aEvaluator unImpOpEvaluator 
#define _a2iEvaluator unImpOpEvaluator 
#define _a2lEvaluator passThroughEvaluator
#define _a2bEvaluator unImpOpEvaluator 
#define _a2sEvaluator unImpOpEvaluator 
#define _icmpeqEvaluator icmpeqEvaluator
#define _icmpneEvaluator icmpneEvaluator
#define _icmpltEvaluator icmpltEvaluator
#define _icmpgeEvaluator icmpgeEvaluator
#define _icmpgtEvaluator icmpgtEvaluator
#define _icmpleEvaluator icmpleEvaluator
#define _iucmpltEvaluator iucmpltEvaluator
#define _iucmpgeEvaluator iucmpgeEvaluator
#define _iucmpgtEvaluator iucmpgtEvaluator
#define _iucmpleEvaluator iucmpleEvaluator
#define _lcmpeqEvaluator lcmpeqEvaluator
#define _lcmpneEvaluator lcmpneEvaluator
#define _lcmpltEvaluator lcmpltEvaluator
#define _lcmpgeEvaluator lcmpgeEvaluator
#define _lcmpgtEvaluator lcmpgtEvaluator
#define _lcmpleEvaluator lcmpleEvaluator
#define _lucmpltEvaluator lucmpltEvaluator
#define _lucmpgeEvaluator lucmpgeEvaluator
#define _lucmpgtEvaluator lucmpgtEvaluator
#define _lucmpleEvaluator lucmpleEvaluator
#define _fcmpeqEvaluator fcmpeqEvaluator 
#define _fcmpneEvaluator fcmpneEvaluator 
#define _fcmpltEvaluator fcmpltEvaluator 
#define _fcmpgeEvaluator fcmpgeEvaluator 
#define _fcmpgtEvaluator fcmpgtEvaluator 
#define _fcmpleEvaluator fcmpleEvaluator 
#define _fcmpequEvaluator fcmpequEvaluator 
#define _fcmpneuEvaluator fcmpneuEvaluator 
#define _fcmpltuEvaluator fcmpltuEvaluator 
#define _fcmpgeuEvaluator fcmpgeuEvaluator 
#define _fcmpgtuEvaluator fcmpgtuEvaluator 
#define _fcmpleuEvaluator fcmpleuEvaluator 
#define _dcmpeqEvaluator dcmpeqEvaluator 
#define _dcmpneEvaluator dcmpneEvaluator 
#define _dcmpltEvaluator dcmpltEvaluator 
#define _dcmpgeEvaluator dcmpgeEvaluator 
#define _dcmpgtEvaluator dcmpgtEvaluator 
#define _dcmpleEvaluator dcmpleEvaluator 
#define _dcmpequEvaluator dcmpequEvaluator 
#define _dcmpneuEvaluator dcmpneuEvaluator 
#define _dcmpltuEvaluator dcmpltuEvaluator 
#define _dcmpgeuEvaluator dcmpgeuEvaluator 
#define _dcmpgtuEvaluator dcmpgtuEvaluator 
#define _dcmpleuEvaluator dcmpleuEvaluator 
#define _acmpeqEvaluator unImpOpEvaluator 
#define _acmpneEvaluator unImpOpEvaluator 
#define _acmpltEvaluator unImpOpEvaluator 
#define _acmpgeEvaluator unImpOpEvaluator 
#define _acmpgtEvaluator unImpOpEvaluator 
#define _acmpleEvaluator unImpOpEvaluator 
#define _bcmpeqEvaluator unImpOpEvaluator 
#define _bcmpneEvaluator unImpOpEvaluator 
#define _bcmpltEvaluator unImpOpEvaluator 
#define _bcmpgeEvaluator unImpOpEvaluator 
#define _bcmpgtEvaluator unImpOpEvaluator 
#define _bcmpleEvaluator unImpOpEvaluator 
#define _bucmpltEvaluator unImpOpEvaluator 
#define _bucmpgeEvaluator unImpOpEvaluator 
#define _bucmpgtEvaluator unImpOpEvaluator 
#define _bucmpleEvaluator unImpOpEvaluator 
#define _scmpeqEvaluator unImpOpEvaluator 
#define _scmpneEvaluator unImpOpEvaluator 
#define _scmpltEvaluator unImpOpEvaluator 
#define _scmpgeEvaluator unImpOpEvaluator 
#define _scmpgtEvaluator unImpOpEvaluator 
#define _scmpleEvaluator unImpOpEvaluator 
#define _sucmpltEvaluator unImpOpEvaluator 
#define _sucmpgeEvaluator unImpOpEvaluator 
#define _sucmpgtEvaluator unImpOpEvaluator 
#define _sucmpleEvaluator unImpOpEvaluator 
#define _lcmpEvaluator lcmpEvaluator
#define _fcmplEvaluator dcmplEvaluator 
#define _fcmpgEvaluator dcmpgEvaluator 
#define _dcmplEvaluator dcmplEvaluator 
#define _dcmpgEvaluator dcmpgEvaluator 
#define _ificmpeqEvaluator ificmpeqEvaluator
#define _ificmpneEvaluator ificmpneEvaluator
#define _ificmpltEvaluator ificmpltEvaluator
#define _ificmpgeEvaluator ificmpgeEvaluator
#define _ificmpgtEvaluator ificmpgtEvaluator
#define _ificmpleEvaluator ificmpleEvaluator
#define _ifiucmpltEvaluator ifiucmpltEvaluator
#define _ifiucmpgeEvaluator ifiucmpgeEvaluator
#define _ifiucmpgtEvaluator ifiucmpgtEvaluator
#define _ifiucmpleEvaluator ifiucmpleEvaluator
#define _iflcmpeqEvaluator iflcmpeqEvaluator
#define _iflcmpneEvaluator iflcmpneEvaluator
#define _iflcmpltEvaluator iflcmpltEvaluator
#define _iflcmpgeEvaluator iflcmpgeEvaluator
#define _iflcmpgtEvaluator iflcmpgtEvaluator
#define _iflcmpleEvaluator iflcmpleEvaluator
#define _iflucmpltEvaluator iflucmpltEvaluator
#define _iflucmpgeEvaluator iflucmpgeEvaluator
#define _iflucmpgtEvaluator iflucmpgtEvaluator
#define _iflucmpleEvaluator iflucmpleEvaluator
#define _iffcmpeqEvaluator unImpOpEvaluator 
#define _iffcmpneEvaluator unImpOpEvaluator 
#define _iffcmpltEvaluator unImpOpEvaluator 
#define _iffcmpgeEvaluator unImpOpEvaluator 
#define _iffcmpgtEvaluator unImpOpEvaluator 
#define _iffcmpleEvaluator unImpOpEvaluator 
#define _iffcmpequEvaluator unImpOpEvaluator 
#define _iffcmpneuEvaluator unImpOpEvaluator 
#define _iffcmpltuEvaluator unImpOpEvaluator 
#define _iffcmpgeuEvaluator unImpOpEvaluator 
#define _iffcmpgtuEvaluator unImpOpEvaluator 
#define _iffcmpleuEvaluator unImpOpEvaluator 
#define _ifdcmpeqEvaluator unImpOpEvaluator 
#define _ifdcmpneEvaluator unImpOpEvaluator 
#define _ifdcmpltEvaluator unImpOpEvaluator 
#define _ifdcmpgeEvaluator unImpOpEvaluator 
#define _ifdcmpgtEvaluator unImpOpEvaluator 
#define _ifdcmpleEvaluator unImpOpEvaluator 
#define _ifdcmpequEvaluator unImpOpEvaluator 
#define _ifdcmpneuEvaluator unImpOpEvaluator 
#define _ifdcmpltuEvaluator unImpOpEvaluator 
#define _ifdcmpgeuEvaluator unImpOpEvaluator 
#define _ifdcmpgtuEvaluator unImpOpEvaluator 
#define _ifdcmpleuEvaluator unImpOpEvaluator 
#define _ifacmpeqEvaluator iflcmpeqEvaluator
#define _ifacmpneEvaluator iflcmpneEvaluator
#define _ifacmpltEvaluator iflucmpltEvaluator
#define _ifacmpgeEvaluator iflucmpgeEvaluator
#define _ifacmpgtEvaluator iflucmpgtEvaluator
#define _ifacmpleEvaluator iflucmpleEvaluator
#define _ifbcmpeqEvaluator unImpOpEvaluator 
#define _ifbcmpneEvaluator unImpOpEvaluator 
#define _ifbcmpltEvaluator unImpOpEvaluator 
#define _ifbcmpgeEvaluator unImpOpEvaluator 
#define _ifbcmpgtEvaluator unImpOpEvaluator 
#define _ifbcmpleEvaluator unImpOpEvaluator 
#define _ifbucmpltEvaluator unImpOpEvaluator 
#define _ifbucmpgeEvaluator unImpOpEvaluator 
#define _ifbucmpgtEvaluator unImpOpEvaluator 
#define _ifbucmpleEvaluator unImpOpEvaluator 
#define _ifscmpeqEvaluator unImpOpEvaluator 
#define _ifscmpneEvaluator unImpOpEvaluator 
#define _ifscmpltEvaluator unImpOpEvaluator 
#define _ifscmpgeEvaluator unImpOpEvaluator 
#define _ifscmpgtEvaluator unImpOpEvaluator 
#define _ifscmpleEvaluator unImpOpEvaluator 
#define _ifsucmpltEvaluator unImpOpEvaluator 
#define _ifsucmpgeEvaluator unImpOpEvaluator 
#define _ifsucmpgtEvaluator unImpOpEvaluator 
#define _ifsucmpleEvaluator unImpOpEvaluator 
#define _loadaddrEvaluator unImpOpEvaluator 
#define _ZEROCHKEvaluator unImpOpEvaluator 
#define _callIfEvaluator unImpOpEvaluator 
#define _iRegLoadEvaluator iRegLoadEvaluator
#define _aRegLoadEvaluator aRegLoadEvaluator
#define _lRegLoadEvaluator iRegLoadEvaluator
#define _fRegLoadEvaluator fRegLoadEvaluator
#define _dRegLoadEvaluator fRegLoadEvaluator
#define _sRegLoadEvaluator iRegLoadEvaluator
#define _bRegLoadEvaluator iRegLoadEvaluator
#define _iRegStoreEvaluator iRegStoreEvaluator
#define _aRegStoreEvaluator iRegStoreEvaluator
#define _lRegStoreEvaluator iRegStoreEvaluator
#define _fRegStoreEvaluator iRegStoreEvaluator
#define _dRegStoreEvaluator iRegStoreEvaluator
#define _sRegStoreEvaluator iRegStoreEvaluator
#define _bRegStoreEvaluator iRegStoreEvaluator
#define _GlRegDepsEvaluator GlRegDepsEvaluator
#define _iselectEvaluator iselectEvaluator 
#define _lselectEvaluator iselectEvaluator 
#define _bselectEvaluator iselectEvaluator 
#define _sselectEvaluator iselectEvaluator 
#define _aselectEvaluator iselectEvaluator 
#define _fselectEvaluator fselectEvaluator 
#define _dselectEvaluator dselectEvaluator 
#define _treetopEvaluator treetopEvaluator
#define _MethodEnterHookEvaluator unImpOpEvaluator 
#define _MethodExitHookEvaluator unImpOpEvaluator 
#define _PassThroughEvaluator passThroughEvaluator
#define _compressedRefsEvaluator unImpOpEvaluator 
#define _BBStartEvaluator BBStartEvaluator
#define _BBEndEvaluator BBEndEvaluator
#define _viremEvaluator unImpOpEvaluator 
#define _viminEvaluator unImpOpEvaluator 
#define _vimaxEvaluator unImpOpEvaluator 
#define _vigetelemEvaluator unImpOpEvaluator 
#define _visetelemEvaluator unImpOpEvaluator 
#define _vimergelEvaluator unImpOpEvaluator 
#define _vimergehEvaluator unImpOpEvaluator 
#define _vicmpeqEvaluator unImpOpEvaluator 
#define _vicmpgtEvaluator unImpOpEvaluator 
#define _vicmpgeEvaluator unImpOpEvaluator 
#define _vicmpltEvaluator unImpOpEvaluator 
#define _vicmpleEvaluator unImpOpEvaluator 
#define _vicmpalleqEvaluator unImpOpEvaluator 
#define _vicmpallneEvaluator unImpOpEvaluator 
#define _vicmpallgtEvaluator unImpOpEvaluator 
#define _vicmpallgeEvaluator unImpOpEvaluator 
#define _vicmpallltEvaluator unImpOpEvaluator 
#define _vicmpallleEvaluator unImpOpEvaluator 
#define _vicmpanyeqEvaluator unImpOpEvaluator 
#define _vicmpanyneEvaluator unImpOpEvaluator 
#define _vicmpanygtEvaluator unImpOpEvaluator 
#define _vicmpanygeEvaluator unImpOpEvaluator 
#define _vicmpanyltEvaluator unImpOpEvaluator 
#define _vicmpanyleEvaluator unImpOpEvaluator 
#define _vnotEvaluator unImpOpEvaluator 
#define _vbitselectEvaluator unImpOpEvaluator 
#define _vpermEvaluator unImpOpEvaluator 
#define _vsplatsEvaluator unImpOpEvaluator 
#define _vdmergelEvaluator unImpOpEvaluator 
#define _vdmergehEvaluator unImpOpEvaluator 
#define _vdsetelemEvaluator unImpOpEvaluator 
#define _vdgetelemEvaluator unImpOpEvaluator 
#define _vdselEvaluator unImpOpEvaluator 
#define _vdremEvaluator unImpOpEvaluator 
#define _vdmaddEvaluator unImpOpEvaluator 
#define _vdnmsubEvaluator unImpOpEvaluator 
#define _vdmsubEvaluator unImpOpEvaluator 
#define _vdmaxEvaluator unImpOpEvaluator 
#define _vdminEvaluator unImpOpEvaluator 
#define _vdcmpeqEvaluator unImpOpEvaluator 
#define _vdcmpneEvaluator unImpOpEvaluator 
#define _vdcmpgtEvaluator unImpOpEvaluator 
#define _vdcmpgeEvaluator unImpOpEvaluator 
#define _vdcmpltEvaluator unImpOpEvaluator 
#define _vdcmpleEvaluator unImpOpEvaluator 
#define _vdcmpalleqEvaluator unImpOpEvaluator 
#define _vdcmpallneEvaluator unImpOpEvaluator 
#define _vdcmpallgtEvaluator unImpOpEvaluator 
#define _vdcmpallgeEvaluator unImpOpEvaluator 
#define _vdcmpallltEvaluator unImpOpEvaluator 
#define _vdcmpallleEvaluator unImpOpEvaluator 
#define _vdcmpanyeqEvaluator unImpOpEvaluator 
#define _vdcmpanyneEvaluator unImpOpEvaluator 
#define _vdcmpanygtEvaluator unImpOpEvaluator 
#define _vdcmpanygeEvaluator unImpOpEvaluator 
#define _vdcmpanyltEvaluator unImpOpEvaluator 
#define _vdcmpanyleEvaluator unImpOpEvaluator 
#define _vdsqrtEvaluator unImpOpEvaluator 
#define _vdlogEvaluator unImpOpEvaluator 
#define _vincEvaluator unImpOpEvaluator 
#define _vdecEvaluator unImpOpEvaluator 
#define _vnegEvaluator unImpOpEvaluator 
#define _vcomEvaluator unImpOpEvaluator 
#define _vaddEvaluator unImpOpEvaluator 
#define _vsubEvaluator unImpOpEvaluator 
#define _vmulEvaluator unImpOpEvaluator 
#define _vdivEvaluator unImpOpEvaluator 
#define _vremEvaluator unImpOpEvaluator 
#define _vandEvaluator unImpOpEvaluator 
#define _vorEvaluator unImpOpEvaluator 
#define _vxorEvaluator unImpOpEvaluator 
#define _vshlEvaluator unImpOpEvaluator 
#define _vushrEvaluator unImpOpEvaluator 
#define _vshrEvaluator unImpOpEvaluator 
#define _vcmpeqEvaluator unImpOpEvaluator 
#define _vcmpneEvaluator unImpOpEvaluator 
#define _vcmpltEvaluator unImpOpEvaluator 
#define _vucmpltEvaluator unImpOpEvaluator 
#define _vcmpgtEvaluator unImpOpEvaluator 
#define _vucmpgtEvaluator unImpOpEvaluator 
#define _vcmpleEvaluator unImpOpEvaluator 
#define _vucmpleEvaluator unImpOpEvaluator 
#define _vcmpgeEvaluator unImpOpEvaluator 
#define _vucmpgeEvaluator unImpOpEvaluator 
#define _vloadEvaluator unImpOpEvaluator 
#define _vloadiEvaluator unImpOpEvaluator 
#define _vstoreEvaluator unImpOpEvaluator 
#define _vstoreiEvaluator unImpOpEvaluator 
#define _vrandEvaluator unImpOpEvaluator 
#define _vreturnEvaluator unImpOpEvaluator 
#define _vcallEvaluator unImpOpEvaluator 
#define _vcalliEvaluator unImpOpEvaluator 
#define _vselectEvaluator unImpOpEvaluator 
#define _v2vEvaluator unImpOpEvaluator 
#define _vl2vdEvaluator unImpOpEvaluator 
#define _vconstEvaluator unImpOpEvaluator 
#define _getvelemEvaluator unImpOpEvaluator 
#define _vsetelemEvaluator unImpOpEvaluator 
#define _vbRegLoadEvaluator unImpOpEvaluator 
#define _vsRegLoadEvaluator unImpOpEvaluator 
#define _viRegLoadEvaluator unImpOpEvaluator 
#define _vlRegLoadEvaluator unImpOpEvaluator 
#define _vfRegLoadEvaluator unImpOpEvaluator 
#define _vdRegLoadEvaluator unImpOpEvaluator 
#define _vbRegStoreEvaluator unImpOpEvaluator 
#define _vsRegStoreEvaluator unImpOpEvaluator 
#define _viRegStoreEvaluator unImpOpEvaluator 
#define _vlRegStoreEvaluator unImpOpEvaluator 
#define _vfRegStoreEvaluator unImpOpEvaluator 
#define _vdRegStoreEvaluator unImpOpEvaluator 
#define _iuloadEvaluator unImpOpEvaluator 
#define _luloadEvaluator unImpOpEvaluator 
#define _buloadEvaluator unImpOpEvaluator 
#define _iuloadiEvaluator unImpOpEvaluator 
#define _luloadiEvaluator unImpOpEvaluator 
#define _buloadiEvaluator unImpOpEvaluator 
#define _iustoreEvaluator unImpOpEvaluator 
#define _lustoreEvaluator unImpOpEvaluator 
#define _bustoreEvaluator unImpOpEvaluator 
#define _iustoreiEvaluator unImpOpEvaluator 
#define _lustoreiEvaluator unImpOpEvaluator 
#define _bustoreiEvaluator unImpOpEvaluator 
#define _iuaddEvaluator unImpOpEvaluator 
#define _luaddEvaluator unImpOpEvaluator 
#define _buaddEvaluator unImpOpEvaluator 
#define _iusubEvaluator unImpOpEvaluator 
#define _lusubEvaluator unImpOpEvaluator 
#define _busubEvaluator unImpOpEvaluator 
#define _iunegEvaluator unImpOpEvaluator 
#define _lunegEvaluator unImpOpEvaluator 
#define _f2iuEvaluator unImpOpEvaluator 
#define _f2luEvaluator unImpOpEvaluator 
#define _f2buEvaluator unImpOpEvaluator 
#define _f2cEvaluator unImpOpEvaluator 
#define _d2iuEvaluator unImpOpEvaluator 
#define _d2luEvaluator unImpOpEvaluator 
#define _d2buEvaluator unImpOpEvaluator 
#define _d2cEvaluator unImpOpEvaluator 
#define _iuRegLoadEvaluator unImpOpEvaluator 
#define _luRegLoadEvaluator unImpOpEvaluator 
#define _iuRegStoreEvaluator unImpOpEvaluator 
#define _luRegStoreEvaluator unImpOpEvaluator 
#define _cloadEvaluator cloadEvaluator
#define _cloadiEvaluator cloadEvaluator
#define _cstoreEvaluator sstoreEvaluator
#define _cstoreiEvaluator sstoreEvaluator
#define _monentEvaluator unImpOpEvaluator 
#define _monexitEvaluator unImpOpEvaluator 
#define _monexitfenceEvaluator unImpOpEvaluator 
#define _tstartEvaluator unImpOpEvaluator 
#define _tfinishEvaluator unImpOpEvaluator 
#define _tabortEvaluator unImpOpEvaluator 
#define _instanceofEvaluator unImpOpEvaluator 
#define _checkcastEvaluator unImpOpEvaluator 
#define _checkcastAndNULLCHKEvaluator unImpOpEvaluator 
#define _NewEvaluator unImpOpEvaluator 
#define _newvalueEvaluator unImpOpEvaluator 
#define _newarrayEvaluator unImpOpEvaluator 
#define _anewarrayEvaluator unImpOpEvaluator 
#define _variableNewEvaluator unImpOpEvaluator 
#define _variableNewArrayEvaluator unImpOpEvaluator 
#define _multianewarrayEvaluator unImpOpEvaluator 
#define _arraylengthEvaluator unImpOpEvaluator 
#define _contigarraylengthEvaluator unImpOpEvaluator 
#define _discontigarraylengthEvaluator unImpOpEvaluator 
#define _icalliEvaluator indirectCallEvaluator 
#define _lcalliEvaluator indirectCallEvaluator 
#define _fcalliEvaluator indirectCallEvaluator 
#define _dcalliEvaluator indirectCallEvaluator 
#define _acalliEvaluator indirectCallEvaluator 
#define _calliEvaluator indirectCallEvaluator 
#define _fenceEvaluator unImpOpEvaluator 
#define _luaddhEvaluator unImpOpEvaluator 
#define _caddEvaluator unImpOpEvaluator 
#define _aiaddEvaluator laddEvaluator 
#define _aiuaddEvaluator unImpOpEvaluator 
#define _aladdEvaluator laddEvaluator 
#define _aluaddEvaluator unImpOpEvaluator 
#define _lusubhEvaluator unImpOpEvaluator 
#define _csubEvaluator unImpOpEvaluator 
#define _imulhEvaluator imulhEvaluator 
#define _iumulhEvaluator unImpOpEvaluator 
#define _lmulhEvaluator unImpOpEvaluator 
#define _lumulhEvaluator unImpOpEvaluator 
#define _ibits2fEvaluator ibits2fEvaluator
#define _fbits2iEvaluator fbits2iEvaluator
#define _lbits2dEvaluator lbits2dEvaluator
#define _dbits2lEvaluator dbits2lEvaluator
#define _lookupEvaluator unImpOpEvaluator 
#define _trtLookupEvaluator unImpOpEvaluator 
#define _CaseEvaluator unImpOpEvaluator 
#define _tableEvaluator unImpOpEvaluator 
#define _exceptionRangeFenceEvaluator unImpOpEvaluator 
#define _dbgFenceEvaluator unImpOpEvaluator 
#define _NULLCHKEvaluator unImpOpEvaluator 
#define _ResolveCHKEvaluator unImpOpEvaluator 
#define _ResolveAndNULLCHKEvaluator unImpOpEvaluator 
#define _DIVCHKEvaluator unImpOpEvaluator 
#define _OverflowCHKEvaluator unImpOpEvaluator 
#define _UnsignedOverflowCHKEvaluator unImpOpEvaluator 
#define _BNDCHKEvaluator unImpOpEvaluator 
#define _ArrayCopyBNDCHKEvaluator unImpOpEvaluator 
#define _BNDCHKwithSpineCHKEvaluator unImpOpEvaluator 
#define _SpineCHKEvaluator unImpOpEvaluator 
#define _ArrayStoreCHKEvaluator unImpOpEvaluator 
#define _ArrayCHKEvaluator unImpOpEvaluator 
#define _RetEvaluator unImpOpEvaluator 
#define _arraycopyEvaluator unImpOpEvaluator 
#define _arraysetEvaluator unImpOpEvaluator 
#define _arraytranslateEvaluator unImpOpEvaluator 
#define _arraytranslateAndTestEvaluator unImpOpEvaluator 
#define _long2StringEvaluator unImpOpEvaluator 
#define _bitOpMemEvaluator unImpOpEvaluator 
#define _bitOpMemNDEvaluator unImpOpEvaluator 
#define _arraycmpEvaluator unImpOpEvaluator 
#define _arraycmpWithPadEvaluator unImpOpEvaluator 
#define _allocationFenceEvaluator unImpOpEvaluator 
#define _loadFenceEvaluator unImpOpEvaluator 
#define _storeFenceEvaluator unImpOpEvaluator 
#define _fullFenceEvaluator unImpOpEvaluator 
#define _MergeNewEvaluator unImpOpEvaluator 
#define _computeCCEvaluator unImpOpEvaluator 
#define _butestEvaluator unImpOpEvaluator 
#define _sutestEvaluator unImpOpEvaluator 
#define _bucmpEvaluator unImpOpEvaluator 
#define _bcmpEvaluator unImpOpEvaluator 
#define _sucmpEvaluator unImpOpEvaluator 
#define _scmpEvaluator unImpOpEvaluator 
#define _iucmpEvaluator unImpOpEvaluator 
#define _icmpEvaluator unImpOpEvaluator 
#define _lucmpEvaluator unImpOpEvaluator 
#define _ificmpoEvaluator unImpOpEvaluator 
#define _ificmpnoEvaluator unImpOpEvaluator 
#define _iflcmpoEvaluator unImpOpEvaluator 
#define _iflcmpnoEvaluator unImpOpEvaluator 
#define _ificmnoEvaluator unImpOpEvaluator 
#define _ificmnnoEvaluator unImpOpEvaluator 
#define _iflcmnoEvaluator unImpOpEvaluator 
#define _iflcmnnoEvaluator unImpOpEvaluator 
#define _iuaddcEvaluator unImpOpEvaluator 
#define _luaddcEvaluator unImpOpEvaluator 
#define _iusubbEvaluator unImpOpEvaluator 
#define _lusubbEvaluator unImpOpEvaluator 
#define _icmpsetEvaluator unImpOpEvaluator 
#define _lcmpsetEvaluator unImpOpEvaluator 
#define _bztestnsetEvaluator unImpOpEvaluator 
#define _ibatomicorEvaluator unImpOpEvaluator 
#define _isatomicorEvaluator unImpOpEvaluator 
#define _iiatomicorEvaluator unImpOpEvaluator 
#define _ilatomicorEvaluator unImpOpEvaluator 
#define _dexpEvaluator unImpOpEvaluator 
#define _branchEvaluator unImpOpEvaluator 
#define _igotoEvaluator unImpOpEvaluator 
#define _bexpEvaluator unImpOpEvaluator 
#define _buexpEvaluator unImpOpEvaluator 
#define _sexpEvaluator unImpOpEvaluator 
#define _cexpEvaluator unImpOpEvaluator 
#define _iexpEvaluator unImpOpEvaluator 
#define _iuexpEvaluator unImpOpEvaluator 
#define _lexpEvaluator unImpOpEvaluator 
#define _luexpEvaluator unImpOpEvaluator 
#define _fexpEvaluator unImpOpEvaluator 
#define _fuexpEvaluator unImpOpEvaluator 
#define _duexpEvaluator unImpOpEvaluator 
#define _ixfrsEvaluator unImpOpEvaluator 
#define _lxfrsEvaluator unImpOpEvaluator 
#define _fxfrsEvaluator unImpOpEvaluator 
#define _dxfrsEvaluator unImpOpEvaluator 
#define _fintEvaluator unImpOpEvaluator 
#define _dintEvaluator unImpOpEvaluator 
#define _fnintEvaluator unImpOpEvaluator 
#define _dnintEvaluator unImpOpEvaluator 
#define _fsqrtEvaluator unImpOpEvaluator 
#define _dsqrtEvaluator unImpOpEvaluator 
#define _getstackEvaluator unImpOpEvaluator 
#define _deallocaEvaluator unImpOpEvaluator 
#define _idozEvaluator unImpOpEvaluator 
#define _dcosEvaluator unImpOpEvaluator 
#define _dsinEvaluator unImpOpEvaluator 
#define _dtanEvaluator unImpOpEvaluator 
#define _dcoshEvaluator unImpOpEvaluator 
#define _dsinhEvaluator unImpOpEvaluator 
#define _dtanhEvaluator unImpOpEvaluator 
#define _dacosEvaluator unImpOpEvaluator 
#define _dasinEvaluator unImpOpEvaluator 
#define _datanEvaluator unImpOpEvaluator 
#define _datan2Evaluator unImpOpEvaluator 
#define _dlogEvaluator unImpOpEvaluator 
#define _dfloorEvaluator unImpOpEvaluator 
#define _ffloorEvaluator unImpOpEvaluator 
#define _dceilEvaluator unImpOpEvaluator 
#define _fceilEvaluator unImpOpEvaluator 
#define _ibranchEvaluator unImpOpEvaluator 
#define _mbranchEvaluator unImpOpEvaluator 
#define _getpmEvaluator unImpOpEvaluator 
#define _setpmEvaluator unImpOpEvaluator 
#define _loadAutoOffsetEvaluator unImpOpEvaluator 
#define _imaxEvaluator imaxEvaluator 
#define _iumaxEvaluator iumaxEvaluator 
#define _lmaxEvaluator imaxEvaluator 
#define _lumaxEvaluator iumaxEvaluator 
#define _fmaxEvaluator fmaxEvaluator 
#define _dmaxEvaluator dmaxEvaluator 
#define _iminEvaluator iminEvaluator 
#define _iuminEvaluator iuminEvaluator 
#define _lminEvaluator iminEvaluator 
#define _luminEvaluator iuminEvaluator 
#define _fminEvaluator fminEvaluator 
#define _dminEvaluator dminEvaluator 
#define _trtEvaluator unImpOpEvaluator 
#define _trtSimpleEvaluator unImpOpEvaluator 
#define _ihbitEvaluator unImpOpEvaluator 
#define _ilbitEvaluator unImpOpEvaluator 
#define _inolzEvaluator unImpOpEvaluator 
#define _inotzEvaluator unImpOpEvaluator 
#define _ipopcntEvaluator unImpOpEvaluator 
#define _lhbitEvaluator unImpOpEvaluator 
#define _llbitEvaluator unImpOpEvaluator 
#define _lnolzEvaluator unImpOpEvaluator 
#define _lnotzEvaluator unImpOpEvaluator 
#define _lpopcntEvaluator unImpOpEvaluator 
#define _sbyteswapEvaluator unImpOpEvaluator 
#define _ibyteswapEvaluator unImpOpEvaluator 
#define _lbyteswapEvaluator unImpOpEvaluator 
#define _bbitpermuteEvaluator unImpOpEvaluator 
#define _sbitpermuteEvaluator unImpOpEvaluator 
#define _ibitpermuteEvaluator unImpOpEvaluator 
#define _lbitpermuteEvaluator unImpOpEvaluator 
#define _PrefetchEvaluator unImpOpEvaluator 


#include "il/OMROpcodes.hpp"

#define GENERATE_TREE_EVAL_TABLE(\
   opcode, \
   name, \
   prop1, \
   prop2, \
   prop3, \
   prop4, \
   dataType, \
   typeProps, \
   childProps, \
   swapChildrenOpcode, \
   reverseBranchOpcode, \
   boolCompareOpcode, \
   ifCompareOpcode, \
   enumValue, \
   ...) _ ## enumValue ## Evaluator,

   _BadILOpEvaluator,
   FOR_EACH_OPCODE(GENERATE_TREE_EVAL_TABLE)

#undef GENERATE_TREE_EVAL_TABLE

