// rea decompile_all
// name: FUN_10024a938
// address: 0x10024a938
// body: available
// range: 0x10024a938-0x10024bd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024bd38 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10024a938(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 **param_4,
                  long param_5,code *param_6,undefined8 param_7,code *param_8,undefined8 param_9)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ID self;
  ID IVar14;
  undefined1 *puVar15;
  undefined8 ****ppppuVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 ***pppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ***pppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  FILE *pFVar25;
  undefined1 *puVar26;
  size_t sVar27;
  ID IVar28;
  undefined8 ***self_00;
  char *pcVar29;
  char *pcVar30;
  undefined1 *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  uint uVar43;
  ulong uVar44;
  code *pcVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined8 auStack_3c0 [4];
  undefined1 auStack_3a0 [8];
  long local_398;
  char *local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  code *local_370;
  undefined8 local_368;
  undefined *local_360;
  code *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  ID local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 **local_320;
  ID local_318;
  undefined *local_310;
  ulong uStack_308;
  uint local_2fc;
  undefined1 *local_2f8;
  undefined8 ***local_2f0;
  undefined8 ***local_2e8;
  undefined8 *local_228;
  undefined8 uStack_220;
  undefined8 **local_218;
  undefined8 uStack_210;
  undefined8 ***local_208;
  undefined8 **local_200;
  undefined1 auStack_1f8 [184];
  undefined8 *local_140;
  long lStack_138;
  undefined8 local_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [24];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar9 = &DAT_100a7fd10;
  FUN_100004bb4(&DAT_100a7fd10,&DAT_100814590);
  puVar31 = auStack_3a0 + -(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  __s10Foundation4DateVMa();
  lVar32 = *(long *)(lVar10 + -8);
  lVar33 = (long)puVar31 - (*(long *)(lVar32 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  __s10Foundation3URLVMa();
  lVar34 = *(long *)(lVar11 + -8);
  uVar35 = *(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar41 = lVar33 - uVar35;
  lVar36 = lVar41 - uVar35;
  lVar12 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar37 = *(long *)(lVar12 + -8);
  lVar38 = lVar36 - (*(long *)(lVar37 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar39 = *(long *)(lVar13 + -8);
  lVar40 = lVar38 - (*(long *)(lVar39 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar29 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar28 = self;
  __s10Foundation3URLV4pathSSvg();
  IVar14 = IVar28;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  pcVar30 = "fileExistsAtPath:";
  IVar14 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar14);
  uVar35 = 0;
  if ((IVar14 & 1) == 0) {
LAB_10024acb0:
    _swift_bridgeObjectRelease();
    FUN_100248d84();
    _swift_allocError(&DAT_1009a7f28,pcVar29,0,0);
    *pcVar29 = '\0';
  }
  else {
    __s10Foundation3URLV13pathExtensionSSvg();
    if (DAT_100a7fa78 != -1) {
      _swift_once(&DAT_100a7fa78,FUN_1002490bc);
    }
    _swift_beginAccess(&DAT_100b363f0,auStack_a0,0,0);
    ppuVar4 = DAT_100b363f0;
    puVar9 = &DAT_100a7fb58;
    FUN_100004bb4(&DAT_100a7fb58,&DAT_1008143d8);
    _swift_initStaticObject();
    local_140 = ppuVar4;
    _swift_bridgeObjectRetain(ppuVar4);
    FUN_10024a7a8(puVar9);
    _swift_arrayDestroy(puVar9 + 0x20,2,PTR___sSSN_1009957f8);
    puVar6 = local_140;
    FUN_100153074(uVar35,pcVar30,local_140);
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(pcVar30);
    if ((uVar35 & 1) == 0) goto LAB_10024acb0;
    puVar15 = (undefined1 *)0x1000;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (0x1000,PTR___ss5UInt8VN_100995d40);
    *(undefined8 *)(puVar15 + 0x10) = 0x1000;
    _bzero(puVar15 + 0x20,0x1000);
    IVar14 = IVar28;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar28,pcVar29);
    local_140 = (undefined8 **)0x0;
    IVar14 = NSFileManager::attributesOfItemAtPath_error_
                       (self,"attributesOfItemAtPath:error:",IVar14,&local_140);
    puVar6 = local_140;
    if (IVar14 != 0) {
      uVar35 = 0;
      FUN_100248dc4();
      puVar9 = &DAT_100a7fb40;
      FUN_100005c90(&DAT_100a7fb40,FUN_100248dc4,&TargetProtocolConformanceDescriptor_100814388);
      local_310 = puVar9;
      uStack_308 = uVar35;
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (IVar14,uVar35,PTR___sypN_100995e88 + 8);
      if (*(long *)(IVar14 + 0x10) == 0) {
LAB_10024ad70:
        lStack_138 = 0;
        local_140 = (undefined8 **)0x0;
        lStack_128 = 0;
        local_130 = 0;
      }
      else {
        lVar42 = *(long *)PTR__NSFileSize_1009952c8;
        _swift_bridgeObjectRetain(IVar14);
        FUN_100234398(lVar42);
        if ((uVar35 & 1) == 0) {
          _swift_bridgeObjectRelease(IVar14);
          goto LAB_10024ad70;
        }
        FUN_10003e8bc(*(long *)(IVar14 + 0x38) + lVar42 * 0x20,&local_140);
        _swift_bridgeObjectRelease(IVar14);
      }
      _swift_bridgeObjectRelease(IVar14);
      if (lStack_128 == 0) {
        FUN_100040bb4(&local_140,&DAT_100a7fce8,&DAT_100814578);
LAB_10024addc:
        dVar47 = 0.0;
      }
      else {
        ppppuVar16 = &local_208;
        _swift_dynamicCast(ppppuVar16,&local_140,PTR___sypN_100995e88 + 8,PTR___sSdN_1009958f0,6);
        if (((ulong)ppppuVar16 & 1) == 0) goto LAB_10024addc;
        dVar47 = (double)local_208 + 0.0;
      }
      if (0x7fefffffffffffff < (ulong)ABS(dVar47)) {
                    /* WARNING: Does not return */
        pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd0c);
        (*pcVar45)();
      }
      if (dVar47 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd10);
        (*pcVar45)();
      }
      if (9.223372036854776e+18 <= dVar47) {
                    /* WARNING: Does not return */
        pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd14);
        (*pcVar45)();
      }
      IVar14 = NSProgress::progressWithTotalUnitCount_
                         ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",(long)dVar47);
      NSProgress::setCancellable_(IVar14,"setCancellable:",0);
      NSProgress::setPausable_(IVar14,"setPausable:",0);
      NSProgress::setKind_(IVar14,"setKind:",*(undefined8 *)PTR__NSProgressKindFile_100995310);
      __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(IVar28,pcVar29);
      _swift_bridgeObjectRelease(pcVar29);
      puVar17 = (undefined1 *)(IVar28 + 0x20);
      FUN_10024f4b8();
      _swift_release(IVar28);
      puVar18 = puVar17;
      FUN_1002509d8();
      if ((int)puVar18 == 0) {
        local_390 = "file.";
        local_328 = *(undefined8 *)PTR__NSFileCreationDate_1009952b0;
        local_330 = *(undefined8 *)PTR__NSFileModificationDate_1009952b8;
        local_388 = *(undefined8 *)PTR__NSFilePosixPermissions_1009952c0;
        dVar48 = 0.0;
        uStack_348 = 4;
        local_350 = 2;
        uStack_378 = 2;
        local_380 = 1;
        local_368 = param_9;
        puVar9 = PTR___sSSN_1009957f8;
        local_398 = (long)dVar47;
        local_338 = self;
        local_318 = IVar14;
        do {
          if (param_5 == 0) {
LAB_10024b014:
            puVar18 = puVar17;
            FUN_1002503ac();
            iVar8 = (int)puVar18;
          }
          else {
            lVar42 = param_5;
            local_140 = param_4;
            lStack_138 = param_5;
            _swift_bridgeObjectRetain(param_5);
            __sSS10FoundationE8EncodingV5asciiACvgZ(lVar40);
            FUN_100248974();
            lVar19 = lVar40;
            __sSy10FoundationE7cString5usingSays4Int8VGSgSSAAE8EncodingV_tF(lVar40,puVar9,lVar42);
            (**(code **)(lVar39 + 8))(lVar40,lVar13);
            _swift_bridgeObjectRelease(param_5);
            if (lVar19 == 0) goto LAB_10024b014;
            puVar18 = puVar17;
            FUN_1002503c0(puVar17,lVar19 + 0x20);
            iVar8 = (int)puVar18;
            _swift_bridgeObjectRelease(lVar19);
          }
          if (iVar8 != 0) {
            _swift_bridgeObjectRelease();
LAB_10024bc70:
            FUN_100248d84();
            _swift_allocError(&DAT_1009a7f28,puVar15,0,0);
            *puVar15 = 1;
            _swift_willThrow();
            goto LAB_10024aefc;
          }
          local_b0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          local_f0 = 0;
          local_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          local_110 = 0;
          uStack_f8 = 0;
          local_100 = 0;
          lStack_128 = 0;
          local_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          lStack_138 = 0;
          local_140 = (undefined8 **)0x0;
          puVar18 = puVar17;
          FUN_10024fd64(puVar17,&local_140,0,0,0,0,0,0);
          uVar5 = local_110;
          if ((int)puVar18 != 0) {
            _swift_bridgeObjectRelease(puVar15);
            puVar15 = puVar17;
            FUN_10024f538();
            goto LAB_10024bc70;
          }
          if (local_100 < 0) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd18);
            (*pcVar45)();
          }
          pppuVar21 = (undefined8 ***)(local_100 + 1);
          if (SCARRY8(local_100,1)) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd1c);
            (*pcVar45)();
          }
          pppuVar20 = pppuVar21;
          _swift_slowAlloc(pppuVar21,0xffffffffffffffff);
          if ((long)pppuVar21 < 0) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd20);
            (*pcVar45)();
          }
          self_00 = (undefined8 ***)&local_140;
          FUN_10024fd64(puVar17,self_00,pppuVar20,pppuVar21,0,0,0,0);
          if (local_100 < 0) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd24);
            (*pcVar45)();
          }
          *(undefined1 *)((long)pppuVar20 + local_100) = 0;
          pppuVar21 = pppuVar20;
          __sSS7cStringSSSPys4Int8VG_tcfC();
          pppuVar22 = pppuVar21;
          __sSS5countSivg();
          if ((long)pppuVar22 < 1) {
            _swift_bridgeObjectRelease(puVar15);
            _swift_bridgeObjectRelease();
            FUN_100248d84();
            _swift_allocError(&DAT_1009a7f28,self_00,0,0);
            *(undefined1 *)self_00 = 1;
            _swift_willThrow();
LAB_10024bbdc:
            FUN_10024f4c0(puVar17);
            goto LAB_10024ace4;
          }
          lVar42 = local_100 + -1;
          local_2f8 = puVar15;
          if (local_100 == 0) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd28);
            (*pcVar45)();
          }
          local_2e8 = pppuVar21;
          if (lVar42 < 0) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd2c);
            (*pcVar45)();
          }
          local_2fc = (uint)*(byte *)((long)pppuVar20 + lVar42);
          local_208 = (undefined8 ***)0x2f;
          local_200 = (undefined8 **)0xe100000000000000;
          __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar40);
          FUN_100248974();
          lVar19 = lVar40;
          local_2f0 = pppuVar22;
          __sSy10FoundationE7cString5usingSays4Int8VGSgSSAAE8EncodingV_tF(lVar40,puVar9);
          pcVar45 = *(code **)(lVar39 + 8);
          (*pcVar45)(lVar40,lVar13);
          if (lVar19 == 0) {
LAB_10024b188:
            cVar3 = *(char *)((long)pppuVar20 + lVar42);
            local_208 = (undefined8 ***)0x5c;
            local_200 = (undefined8 **)0xe100000000000000;
            __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar40);
            lVar42 = lVar40;
            __sSy10FoundationE7cString5usingSays4Int8VGSgSSAAE8EncodingV_tF
                      (lVar40,PTR___sSSN_1009957f8,local_2f0);
            (*pcVar45)(lVar40,lVar13);
            if (lVar42 != 0) {
              if (*(long *)(lVar42 + 0x10) != 0) {
                cVar2 = *(char *)(lVar42 + 0x20);
                _swift_bridgeObjectRelease();
                local_2fc = (uint)(cVar3 == cVar2);
                goto LAB_10024b200;
              }
              _swift_bridgeObjectRelease();
            }
            local_2fc = 0;
          }
          else {
            if (*(long *)(lVar19 + 0x10) == 0) {
              _swift_bridgeObjectRelease();
              goto LAB_10024b188;
            }
            bVar1 = *(byte *)(lVar19 + 0x20);
            _swift_bridgeObjectRelease();
            if (local_2fc != bVar1) goto LAB_10024b188;
            local_2fc = 1;
          }
LAB_10024b200:
          pppuVar22 = local_2f0;
          puVar9 = PTR___sSSN_1009957f8;
          _free(pppuVar20);
          pppuVar21 = local_2e8;
          local_208 = local_2e8;
          local_200 = self_00;
          _swift_bridgeObjectRetain(self_00);
          __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(lVar38,0x5c2f,0xe200000000000000);
          uVar35 = 0;
          __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
                    (lVar38,0,0,0,1,puVar9,pppuVar22);
          local_358 = *(code **)(lVar37 + 8);
          (*local_358)(lVar38,lVar12);
          _swift_bridgeObjectRelease(self_00);
          if ((uVar35 & 1) == 0) {
            local_208 = pppuVar21;
            local_218 = (undefined8 ***)0x5c;
            uStack_210 = 0xe100000000000000;
            local_228 = (undefined8 **)0x2f;
            uStack_220 = 0xe100000000000000;
            local_200 = self_00;
            *(undefined8 ****)(lVar40 + -0x10) = pppuVar22;
            *(undefined8 ****)(lVar40 + -8) = pppuVar22;
            pppuVar21 = &local_218;
            pppuVar20 = (undefined8 ***)&local_228;
            *(undefined **)(lVar40 + -0x20) = puVar9;
            *(undefined8 ****)(lVar40 + -0x18) = pppuVar22;
            __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                      (pppuVar21,pppuVar20,0,0,0,1,puVar9,puVar9);
            _swift_bridgeObjectRelease(self_00);
            self_00 = pppuVar20;
          }
          pppuVar20 = self_00;
          __s10Foundation3URLV22appendingPathComponentyACSSF(lVar36,pppuVar21);
          _swift_bridgeObjectRelease();
          __s10Foundation3URLV4pathSSvg();
          local_370 = *(code **)(lVar34 + 8);
          local_320 = pppuVar20;
          (*local_370)(lVar36,lVar11);
          __s10Foundation4DateVACycfC(lVar33);
          puVar9 = &DAT_100a7fd18;
          FUN_100004bb4(&DAT_100a7fd18,&DAT_100814598);
          local_360 = puVar9;
          _swift_initStackObject();
          *(undefined8 *)(puVar9 + 0x18) = uStack_348;
          *(undefined8 *)(puVar9 + 0x10) = local_350;
          *(undefined8 *)(puVar9 + 0x20) = local_328;
          *(long *)(puVar9 + 0x40) = lVar10;
          FUN_1000efc08(puVar9 + 0x28);
          pcVar45 = *(code **)(lVar32 + 0x10);
          (*pcVar45)();
          *(undefined8 *)(puVar9 + 0x48) = local_330;
          *(long *)(puVar9 + 0x68) = lVar10;
          FUN_1000efc08(puVar9 + 0x50);
          (*pcVar45)();
          pppuVar21 = (undefined8 ***)local_320;
          puVar23 = puVar9;
          FUN_10024a814(puVar9);
          _swift_setDeallocating(puVar9);
          puVar24 = &DAT_100a7fd20;
          FUN_100004bb4(&DAT_100a7fd20,&DAT_1008145a0);
          _swift_arrayDestroy(puVar9 + 0x20,2,puVar24);
          local_2e8 = self_00;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(self_00,pppuVar21);
          if (local_2fc == 0) {
            pcVar29 = "stringByDeletingLastPathComponent";
            IVar14 = _objc_msgSend((ID)self_00,"stringByDeletingLastPathComponent");
            IVar28 = local_338;
            if (IVar14 == 0) {
              IVar14 = 0;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
              _swift_bridgeObjectRelease(pcVar29);
            }
            puVar9 = puVar23;
            __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                      (puVar23,uStack_308,PTR___sypN_100995e88 + 8,local_310);
            _swift_bridgeObjectRelease(puVar23);
            local_208 = (undefined8 ***)0x0;
            IVar14 = _objc_msgSend(IVar28,
                                   "createDirectoryAtPath:withIntermediateDirectories:attributes:error:"
                                   ,IVar14,1,puVar9,&local_208);
            puVar9 = PTR___sSSN_1009957f8;
            if ((int)IVar14 == 0) {
              pppuVar20 = local_208;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_208);
              _swift_willThrow(0);
              _swift_errorRelease(pppuVar20);
            }
          }
          else {
            puVar9 = puVar23;
            __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                      (puVar23,uStack_308,PTR___sypN_100995e88 + 8,local_310);
            _swift_bridgeObjectRelease(puVar23);
            IVar28 = local_338;
            local_208 = (undefined8 ***)0x0;
            IVar14 = _objc_msgSend(local_338,
                                   "createDirectoryAtPath:withIntermediateDirectories:attributes:error:"
                                   ,self_00,1,puVar9,&local_208);
            puVar9 = PTR___sSSN_1009957f8;
            if ((int)IVar14 == 0) {
              pppuVar20 = local_208;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_208);
              _swift_willThrow(0);
              _swift_errorRelease(pppuVar20);
              puVar9 = PTR___sSSN_1009957f8;
            }
          }
          pppuVar20 = local_2e8;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_2e8,pppuVar21);
          IVar14 = _objc_msgSend(IVar28,"fileExistsAtPath:",pppuVar20);
          if ((((local_2fc | (uint)IVar14 ^ 0xffffffff) & 1) == 0) && ((param_3 & 1) == 0)) {
            FUN_10024f538(puVar17);
            FUN_100250b30(puVar17);
          }
          dVar46 = (double)NEON_ucvtf(uVar5);
          dVar48 = dVar48 + dVar46;
          pppuVar20 = local_2e8;
          __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(local_2e8,pppuVar21);
          pFVar25 = _fopen((char *)(pppuVar20 + 4),"wb");
          _swift_release(pppuVar20);
          uVar35 = 0;
          puVar15 = local_2f8;
          while (pFVar25 != (FILE *)0x0) {
            puVar18 = puVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar26 = puVar15;
            if (((ulong)puVar18 & 1) == 0) {
              puVar26 = (undefined1 *)0x0;
              FUN_10024e180(0,*(undefined8 *)(puVar15 + 0x10),0,puVar15);
            }
            puVar15 = puVar17;
            FUN_1002503dc(puVar17,puVar26 + 0x20,0x1000);
            if ((int)puVar15 < 1) {
              _fclose(pFVar25);
              local_2f8 = puVar26;
              goto LAB_10024b6f4;
            }
            uVar44 = (ulong)puVar15 & 0xffffffff;
            sVar27 = _fwrite(puVar26 + 0x20,uVar44,1,pFVar25);
            if (sVar27 != 1) {
              _swift_bridgeObjectRelease(puVar26);
              _swift_bridgeObjectRelease();
              FUN_100248d84();
              _swift_allocError(&DAT_1009a7f28,pppuVar21,0,0);
              *(undefined1 *)pppuVar21 = 1;
              _swift_willThrow();
              (**(code **)(lVar32 + 8))(lVar33,lVar10);
              goto LAB_10024bbdc;
            }
            bVar7 = CARRY8(uVar35,uVar44);
            uVar35 = uVar35 + uVar44;
            puVar15 = puVar26;
            if (bVar7) {
                    /* WARNING: Does not return */
              pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bcf0);
              (*pcVar45)();
            }
          }
          uVar35 = 0;
LAB_10024b6f4:
          puVar15 = puVar17;
          FUN_10024f538();
          if (((int)puVar15 == -0x69) || (uVar35 != uStack_108)) {
            _swift_bridgeObjectRelease(local_2f8);
            _swift_bridgeObjectRelease();
            FUN_100248d84();
            _swift_allocError(&DAT_1009a7f28,pppuVar21,0,0);
            *(undefined1 *)pppuVar21 = 1;
            _swift_willThrow();
            (**(code **)(lVar32 + 8))(lVar33,lVar10);
            FUN_10024f4c0(puVar17);
            goto LAB_10024ace4;
          }
          if ((local_d8 != 0) && (uVar35 = local_d8 >> 0x10 & 0x1ff, 0xff < uVar35)) {
            puVar24 = local_360;
            _swift_initStackObject(local_360,auStack_1f8);
            *(undefined8 *)(puVar24 + 0x18) = uStack_378;
            *(undefined8 *)(puVar24 + 0x10) = local_380;
            *(undefined8 *)(puVar24 + 0x20) = local_388;
            *(undefined **)(puVar24 + 0x40) = PTR___sSuN_100995a50;
            *(ulong *)(puVar24 + 0x28) = uVar35;
            puVar23 = puVar24;
            FUN_10024a814(puVar24);
            _swift_setDeallocating(puVar24);
            FUN_100040bb4(puVar24 + 0x20,&DAT_100a7fd20,&DAT_1008145a0);
            puVar24 = puVar23;
            __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                      (puVar23,uStack_308,PTR___sypN_100995e88 + 8,local_310);
            _swift_bridgeObjectRelease(puVar23);
            pppuVar20 = local_2e8;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_2e8,pppuVar21);
            local_208 = (undefined8 ***)0x0;
            IVar28 = _objc_msgSend(IVar28,"setAttributes:ofItemAtPath:error:",puVar24,pppuVar20,
                                   &local_208);
            if ((int)IVar28 == 0) {
              pppuVar20 = local_208;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
              _swift_willThrow(0);
              puVar24 = &DAT_100a7fd28;
              FUN_100004bb4(&DAT_100a7fd28,&DAT_1008145a8);
              _swift_allocObject();
              *(undefined8 *)(puVar24 + 0x18) = uStack_378;
              *(undefined8 *)(puVar24 + 0x10) = local_380;
              local_208 = (undefined8 ***)0x0;
              local_200 = (undefined8 ***)0xe000000000000000;
              __ss11_StringGutsV4growyySiF(0x2f);
              __sSS6appendyySSF(0xd000000000000022,(ulong)local_390 | 0x8000000000000000);
              __sSS6appendyySSF(local_2e8,local_320);
              __sSS6appendyySSF(0x3a726f727265202c,0xe900000000000020);
              puVar23 = &DAT_100a7fd30;
              local_218 = pppuVar20;
              FUN_100004bb4(&DAT_100a7fd30,&DAT_1008145b0);
              __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                        (&local_218,&local_208,puVar23,
                         PTR___ss26DefaultStringInterpolationVN_100995bf0,
                         PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
              *(undefined **)(puVar24 + 0x38) = puVar9;
              *(undefined8 ****)(puVar24 + 0x20) = local_208;
              *(undefined8 ***)(puVar24 + 0x28) = local_200;
              __ss5print_9separator10terminatoryypd_S2StF
                        (puVar24,0x20,0xe100000000000000,10,0xe100000000000000);
              _swift_bridgeObjectRelease(puVar24);
              _swift_errorRelease(pppuVar20);
            }
          }
          puVar15 = puVar17;
          FUN_100250b30();
          if (param_6 != (code *)0x0) {
            _swift_retain(param_7);
            (*param_6)(dVar48 / dVar47);
            FUN_10007ed2c(param_6,param_7);
          }
          uVar5 = local_368;
          if (param_8 == (code *)0x0) {
            _swift_bridgeObjectRelease(pppuVar21);
            uVar43 = (uint)puVar15;
          }
          else {
            local_208 = local_2e8;
            local_200 = pppuVar21;
            local_2fc = (uint)puVar15;
            _swift_retain(local_368);
            __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(lVar38);
            lVar42 = lVar38;
            puVar24 = puVar9;
            __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                      (lVar38,puVar9,local_2f0);
            (*local_358)(lVar38,lVar12);
            _swift_bridgeObjectRelease(pppuVar21);
            if (puVar24 == (undefined *)0x0) {
              FUN_10007ed2c(param_8,uVar5);
              uVar43 = local_2fc;
            }
            else {
              __s10Foundation3URLV6stringACSgSSh_tcfC(puVar31,lVar42,puVar24);
              _swift_bridgeObjectRelease(puVar24);
              puVar15 = puVar31;
              (**(code **)(lVar34 + 0x30))(puVar31,1,lVar11);
              if ((int)puVar15 == 1) {
                FUN_10007ed2c(param_8,local_368);
                FUN_100040bb4(puVar31,&DAT_100a7fd10,&DAT_100814590);
                uVar43 = local_2fc;
              }
              else {
                (**(code **)(lVar34 + 0x20))(lVar41,puVar31,lVar11);
                uVar5 = local_368;
                (*param_8)(lVar41);
                FUN_10007ed2c(param_8,uVar5);
                puVar9 = PTR___sSSN_1009957f8;
                (*local_370)(lVar41,lVar11);
                uVar43 = local_2fc;
              }
            }
          }
          IVar28 = local_318;
          if (0x7fefffffffffffff < (ulong)ABS(dVar48)) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd30);
            (*pcVar45)();
          }
          if (dVar48 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd34);
            (*pcVar45)();
          }
          if (9.223372036854776e+18 <= dVar48) {
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x10024bd38);
            (*pcVar45)();
          }
          _objc_msgSend(local_318,"setCompletedUnitCount:",(long)dVar48);
          (**(code **)(lVar32 + 8))(lVar33,lVar10);
          puVar15 = local_2f8;
        } while (uVar43 == 0);
        _swift_bridgeObjectRelease(local_2f8);
        if (param_6 != (code *)0x0) {
          _swift_retain(param_7);
          (*param_6)(0x3ff0000000000000);
          FUN_10007ed2c(param_6,param_7);
        }
        _objc_msgSend(IVar28,"setCompletedUnitCount:",local_398);
      }
      else {
        _swift_bridgeObjectRelease();
        FUN_100248d84();
        _swift_allocError(&DAT_1009a7f28,puVar15,0,0);
        *puVar15 = 1;
        _swift_willThrow();
      }
LAB_10024aefc:
      FUN_10024f4c0(puVar17);
      goto LAB_10024ace4;
    }
    _swift_bridgeObjectRelease(puVar15);
    _swift_bridgeObjectRelease(pcVar29);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar6);
  }
  _swift_willThrow();
LAB_10024ace4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

