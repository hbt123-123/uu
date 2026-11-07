// rea decompile_all
// name: FUN_10018e798
// address: 0x10018e798
// body: available
// range: 0x10018e798-0x10018f1cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10018e798(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ID IVar7;
  ID IVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_170 [16];
  ulong auStack_160 [2];
  ulong auStack_150 [2];
  long local_140;
  undefined8 local_138;
  long local_130;
  code *local_128;
  ulong local_120;
  ulong local_118;
  long local_110;
  ulong local_108;
  undefined8 local_100;
  char *local_f8;
  char *pcStack_f0;
  long local_e8;
  undefined4 local_dc;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  long local_a8 [2];
  undefined1 local_98 [24];
  undefined1 auStack_80 [32];
  
  puVar4 = &DAT_100a766c8;
  local_dc = param_6;
  local_d8 = param_5;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  local_d0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  lVar14 = ((long)&local_140 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar17 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = uVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_c8 = lVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar18 = (lVar14 - extraout_x12_01) - extraout_x12_02;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar9 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar9 = param_3 >> 0x38 & 0xf;
    }
    if (uVar9 == 0) {
      local_98[0] = 0;
      FUN_10061630c(local_98);
      _swift_release(param_1);
    }
    else {
      uVar6 = 0;
      local_110 = (long)&local_140 - extraout_x8;
      local_108 = uVar17;
      local_100 = param_4;
      FUN_100401b14();
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(uVar18 - 0x20) = local_d8;
      *(ulong *)(uVar18 - 0x18) = param_2;
      *(ulong *)(uVar18 - 0x10) = param_3;
      local_f8 = s____taskID__100890a60 + 0x10;
      pcStack_f0 = s___taskID__100898cc0 + 0x10;
      FUN_1003fb45c(FUN_100192364,uVar18 - 0x30,0xd0000000000000ad,0x8000000100890a70,
                    0xd00000000000002b,0x8000000100898cd0,0xe7,7);
      local_120 = param_2;
      local_118 = param_3;
      __s10Foundation3URLV22appendingPathComponentyACSSF(uVar18,param_2,param_3);
      __s10Foundation3URLV23resolvingSymlinksInPathACyF(lVar14);
      lVar10 = local_c8;
      __s10Foundation3URLV016standardizedFileB0ACvg(local_c8);
      pcVar16 = *(code **)(local_d0 + 8);
      (*pcVar16)(lVar14,lVar5);
      _swift_beginAccess(param_1 + 0x10,local_98,0,0);
      uVar15 = *(undefined8 *)(param_1 + 0x10);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(uVar18 - 0x10) = lVar10;
      _swift_bridgeObjectRetain(uVar15);
      uVar17 = 0;
      FUN_100152e34(FUN_100192370,uVar18 - 0x20,uVar15);
      _swift_bridgeObjectRelease(uVar15);
      if ((uVar17 & 1) == 0) {
        local_140 = 0;
        local_130 = param_1;
        local_128 = pcVar16;
        local_d8 = lVar5;
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(uVar18 - 0x10) = uVar18;
        pcVar1 = pcStack_f0;
        pcVar12 = local_f8;
        FUN_1003fb45c(FUN_1001923e4,uVar18 - 0x20,0xd0000000000000ad,
                      (ulong)local_f8 | 0x8000000000000000,0xd00000000000002b,
                      (ulong)pcStack_f0 | 0x8000000000000000,0xef,7);
        uVar17 = local_108;
        __s10Foundation3URLV25deletingLastPathComponentACyF(local_108);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(uVar18 - 0x10) = uVar17;
        FUN_1003fb45c(FUN_1001923ec,uVar18 - 0x20,0xd0000000000000ad,
                      (ulong)pcVar12 | 0x8000000000000000,0xd00000000000002b,
                      (ulong)pcVar1 | 0x8000000000000000,0xf1,7);
        pcVar11 = "defaultManager";
        IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
        IVar8 = IVar7;
        __s10Foundation3URLV4pathSSvg();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(pcVar11);
        IVar8 = NSFileManager::fileExistsAtPath_(IVar7,"fileExistsAtPath:",IVar8);
        if (((IVar8 & 1) == 0) && (uVar9 = uVar17, FUN_100191bb0(), (uVar9 & 1) == 0)) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(ulong *)(uVar18 - 0x10) = uVar18;
          FUN_1003fb45c(FUN_1001923f4,uVar18 - 0x20,0xd0000000000000ad,
                        (ulong)pcVar12 | 0x8000000000000000,0xd00000000000002b,
                        (ulong)pcVar1 | 0x8000000000000000,0xf4,7);
          local_c0 = (undefined *)((ulong)local_c0 & 0xffffffffffffff00);
          FUN_10061630c(&local_c0);
          _swift_release(local_130);
          lVar5 = local_d8;
          pcVar16 = local_128;
          (*local_128)(local_c8,local_d8);
          (*pcVar16)(uVar17,lVar5);
        }
        else {
          pcVar12 = "defaultManager";
          local_138 = uVar6;
          IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
          IVar8 = IVar7;
          __s10Foundation3URLV4pathSSvg();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pcVar12);
          IVar8 = NSFileManager::fileExistsAtPath_(IVar7,"fileExistsAtPath:",IVar8);
          lVar5 = local_130;
          if (((int)IVar8 == 0) || (uVar9 = uVar18, FUN_10021a470(), (uVar9 & 1) != 0)) {
            pcVar12 = "defaultManager";
            IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager")
            ;
            IVar8 = IVar7;
            __s10Foundation3URLV4pathSSvg();
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
            _swift_bridgeObjectRelease(pcVar12);
            IVar8 = NSFileManager::createFileAtPath_contents_attributes_
                              (IVar7,"createFileAtPath:contents:attributes:",IVar8,0,0);
            if ((int)IVar8 != 0) {
              FUN_10004003c(0,&DAT_100a77d00,&PTR__OBJC_CLASS___NSFileHandle_100a658e8);
              lVar3 = local_d8;
              lVar10 = local_e8;
              pcVar16 = *(code **)(local_d0 + 0x10);
              (*pcVar16)(local_e8,uVar18,local_d8);
              lVar14 = local_140;
              FUN_10018c040();
              uVar2 = local_dc;
              if (lVar14 == 0) {
                uVar6 = *(undefined8 *)(lVar5 + 0x18);
                local_a8[0] = CONCAT44(local_a8[0]._4_4_,local_dc);
                _swift_retain(uVar6);
                puVar4 = PTR___ss6UInt32VN_100995dc0;
                puVar13 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
                __ss23CustomStringConvertibleP11descriptionSSvgTj();
                local_c0 = puVar4;
                puStack_b8 = puVar13;
                __sSS6appendyySSF(0x3a,0xe100000000000000);
                uVar9 = local_118;
                uVar17 = local_120;
                __sSS6appendyySSF(local_120,local_118);
                local_a8[0] = lVar10;
                FUN_1003e3634(local_a8,&local_c0);
                _swift_release(uVar6);
                local_a8[0] = CONCAT44(local_a8[0]._4_4_,uVar2);
                puVar4 = PTR___ss6UInt32VN_100995dc0;
                puVar13 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
                __ss23CustomStringConvertibleP11descriptionSSvgTj();
                local_c0 = puVar4;
                puStack_b8 = puVar13;
                __sSS6appendyySSF(0x3a,0xe100000000000000);
                __sSS6appendyySSF(uVar17,uVar9);
                puVar13 = puStack_b8;
                puVar4 = local_c0;
                lVar10 = local_c8;
                lVar14 = local_110;
                (*pcVar16)(local_110,local_c8,lVar3);
                (**(code **)(local_d0 + 0x38))(lVar14,0,1,lVar3);
                _swift_beginAccess(lVar5 + 0x10,&local_c0,0x21,0);
                FUN_10018bca4(lVar14,puVar4,puVar13);
                _swift_endAccess(&local_c0);
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(ulong *)(uVar18 - 0x10) = uVar18;
                FUN_1003fb45c(FUN_10019240c,uVar18 - 0x20,0xd0000000000000ad,
                              (ulong)local_f8 | 0x8000000000000000,0xd00000000000002b,
                              (ulong)pcStack_f0 | 0x8000000000000000,0x10b,7);
                local_c0 = (undefined *)CONCAT71(local_c0._1_7_,1);
                FUN_10061630c(&local_c0);
                _swift_release(lVar5);
                uVar17 = local_108;
              }
              else {
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(long *)(uVar18 - 0x10) = lVar14;
                FUN_1003fb45c(FUN_100192404,uVar18 - 0x20,0xd0000000000000ad,
                              (ulong)local_f8 | 0x8000000000000000,0xd00000000000002b,
                              (ulong)pcStack_f0 | 0x8000000000000000,0x10e,7);
                FUN_100616260(lVar14);
                _swift_errorRelease(lVar14);
                _swift_release(lVar5);
                lVar10 = local_c8;
              }
              pcVar16 = local_128;
              (*local_128)(lVar10,lVar3);
              (*pcVar16)(uVar17,lVar3);
              (*pcVar16)(uVar18,lVar3);
              return;
            }
            (*(code *)PTR____chkstk_darwin_100995498)(0);
            *(ulong *)(uVar18 - 0x10) = uVar18;
            pcVar16 = FUN_1001923fc;
            uVar6 = 0x102;
          }
          else {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(ulong *)(uVar18 - 0x10) = uVar18;
            pcVar16 = FUN_100192414;
            uVar6 = 0xfb;
          }
          FUN_1003fb45c(pcVar16,uVar18 - 0x20,0xd0000000000000ad,
                        (ulong)local_f8 | 0x8000000000000000,0xd00000000000002b,
                        (ulong)pcStack_f0 | 0x8000000000000000,uVar6,7);
          local_c0 = (undefined *)((ulong)local_c0 & 0xffffffffffffff00);
          FUN_10061630c(&local_c0);
          _swift_release(lVar5);
          lVar5 = local_d8;
          pcVar16 = local_128;
          (*local_128)(local_c8,local_d8);
          (*pcVar16)(uVar17,lVar5);
        }
        (*pcVar16)(uVar18,lVar5);
      }
      else {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined4 *)(uVar18 - 0x10) = local_dc;
        FUN_1003fb4ec(FUN_10019241c,uVar18 - 0x20,0xd0000000000000ad,
                      (ulong)local_f8 | 0x8000000000000000,0xd00000000000002b,
                      (ulong)pcStack_f0 | 0x8000000000000000,0xeb,0);
        local_c0 = (undefined *)((ulong)local_c0 & 0xffffffffffffff00);
        FUN_10061630c(&local_c0);
        _swift_release(param_1);
        (*pcVar16)(lVar10,lVar5);
        (*pcVar16)(uVar18,lVar5);
      }
    }
  }
  return;
}

