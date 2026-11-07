// rea decompile_all
// name: FUN_1000e4a8c
// address: 0x1000e4a8c
// body: available
// range: 0x1000e4a8c-0x1000e5277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e5274 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000e4a8c(undefined1 *param_1,ulong param_2,ulong param_3,undefined4 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined1 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined4 *puVar13;
  long extraout_x8_04;
  long lVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar16;
  ID self;
  code *pcVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined1 auStack_150 [16];
  undefined4 auStack_140 [2];
  ulong uStack_138;
  ulong auStack_130 [2];
  long local_120;
  long local_118;
  code *local_110;
  long local_108 [4];
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined4 *local_c0;
  long local_b8;
  char local_89;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar3 = &DAT_100a77e70;
  local_108[2] = param_7;
  local_d8 = param_6;
  local_b8 = param_5;
  FUN_100004bb4(&DAT_100a77e70,&DAT_10080cca0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_e0 = (long)&local_120 - extraout_x8;
  FUN_1000e49dc();
  local_108[3] = *(long *)(lVar4 + -8);
  local_d0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108[3] + 0x40));
  lVar12 = ((long)&local_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_e8 = lVar12;
  FUN_1000e984c();
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar22 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a77e78;
  FUN_100004bb4(&DAT_100a77e78,&DAT_10080cca8);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined1 *)(lVar12 - extraout_x8_02);
  puVar5 = &DAT_100a77e80;
  FUN_100004bb4(&DAT_100a77e80,&DAT_10080ccb0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar14 = (long)puVar18 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar13 = (undefined4 *)(lVar14 - extraout_x12);
  lVar14 = 0;
  local_c0 = puVar13;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = (long)puVar13 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar20 - extraout_x12_00;
  uVar16 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar16 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar16 != 0) && ((param_2 != 0x2f3a || (param_3 != 0xe200000000000000)))) {
    uVar16 = param_2;
    local_108[0] = lVar14;
    local_108[1] = lVar15;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_2,param_3,0x2f3a,0xe200000000000000,0);
    lVar2 = local_108[1];
    lVar14 = local_108[0];
    if ((uVar16 & 1) == 0) {
      local_118 = lVar4;
      FUN_1000d6df8(param_2,param_3);
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar20);
      _swift_bridgeObjectRelease(param_3);
      __s10Foundation3URLV016standardizedFileB0ACvg(lVar2);
      local_110 = *(code **)(lVar19 + 8);
      lVar4 = lVar20;
      (*local_110)(lVar20,lVar14);
      local_89 = '\0';
      self = *(ID *)(local_b8 + 0x10);
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(lVar14);
      pcVar10 = "fileExistsAtPath:isDirectory:";
      IVar7 = _objc_msgSend(self,"fileExistsAtPath:isDirectory:",lVar4,&local_89);
      uVar6 = 0;
      if ((int)IVar7 == 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined4 *)(lVar15 + -0x10) = param_4;
        lVar4 = local_108[1];
        *(long *)(lVar15 + -8) = local_108[1];
        FUN_1003fb4ec(FUN_1000e9860,lVar15 + -0x20,0xd0000000000000a9,0x8000000100887e20,
                      0xd00000000000002e,0x8000000100887f00,0x56,0);
        uVar11 = 3;
      }
      else {
        __s10Foundation3URLV4pathSSvg(0);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(pcVar10);
        IVar7 = _objc_msgSend(self,"isReadableFileAtPath:",uVar6);
        puVar13 = local_c0;
        lVar4 = local_108[1];
        if ((int)IVar7 != 0) {
          if (local_89 == '\x01') {
            FUN_1000e553c(local_c0,param_4,local_d8,local_108[1],local_108[2]);
            pcVar21 = local_110;
          }
          else {
            __s10Foundation3URLV25deletingLastPathComponentACyF(lVar20,0);
            FUN_1000e74c8(puVar18,lVar4,lVar20,0);
            lVar14 = local_108[0];
            pcVar21 = local_110;
            (*local_110)(lVar20,local_108[0]);
            puVar8 = puVar18;
            _swift_getEnumCaseMultiPayload(puVar18,puVar3);
            puVar13 = local_c0;
            if ((int)puVar8 == 1) {
              *(undefined1 *)local_c0 = *puVar18;
              _swift_storeEnumTagMultiPayload(puVar13,puVar5,1);
            }
            else {
              FUN_1000823d8(puVar18,lVar12,FUN_1000e984c);
              puVar3 = &DAT_100a75ae0;
              FUN_100004bb4(&DAT_100a75ae0,&DAT_100809b70);
              uVar16 = (ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff);
              lVar15 = uVar16 + *(long *)(lVar22 + 0x48);
              _swift_allocObject();
              *(undefined8 *)(puVar3 + 0x18) = 2;
              *(undefined8 *)(puVar3 + 0x10) = 1;
              puVar1 = (undefined8 *)(puVar3 + uVar16);
              puVar9 = puVar3;
              __s10Foundation3URLV17lastPathComponentSSvg();
              local_108[2] = *(undefined8 *)(lVar12 + 0x10);
              local_120 = *(long *)(lVar12 + 0x18);
              pcVar17 = *(code **)(lVar19 + 0x10);
              (*pcVar17)((long)puVar1 + (long)*(int *)(local_118 + 0x1c),lVar4,lVar14);
              pcVar21 = local_110;
              *puVar1 = puVar9;
              puVar1[1] = lVar15;
              puVar1[2] = local_108[2];
              puVar1[3] = local_120;
              FUN_1000d27dc(lVar12,FUN_1000e984c);
              puVar13 = local_c0;
              *local_c0 = param_4;
              lVar12 = local_d0;
              *(undefined8 *)(puVar13 + 2) = local_d8;
              (*pcVar17)((undefined1 *)((long)puVar13 + (long)*(int *)(lVar12 + 0x18)),lVar4,lVar14)
              ;
              puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar12 + 0x1c));
              *puVar1 = 0;
              puVar1[1] = 0xe000000000000000;
              *(undefined **)((long)puVar13 + (long)*(int *)(lVar12 + 0x20)) = puVar3;
              _swift_storeEnumTagMultiPayload(puVar13,puVar5,0);
            }
          }
          lVar14 = local_c8;
          FUN_1000e9878(puVar13,local_c8);
          lVar12 = lVar14;
          _swift_getEnumCaseMultiPayload(lVar14,puVar5);
          lVar4 = local_e8;
          if ((int)lVar12 == 1) {
            FUN_100040bb4(lVar14,&DAT_100a77e80,&DAT_10080ccb0);
          }
          else {
            FUN_1000823d8(lVar14,local_e8,FUN_1000e49dc);
            lVar14 = local_e0;
            FUN_100082394(lVar4,local_e0,FUN_1000e49dc);
            (**(code **)(local_108[3] + 0x38))(lVar14,0,1,local_d0);
            _swift_beginAccess(local_b8 + 0x20,auStack_88,0x21,0);
            FUN_10018b860(lVar14,param_4);
            _swift_endAccess(auStack_88);
            FUN_1000d27dc(lVar4,FUN_1000e49dc);
          }
          FUN_1000e98c8(puVar13,param_1);
          (*pcVar21)(local_108[1],local_108[0]);
          goto LAB_1000e4d78;
        }
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined4 *)(lVar15 + -0x10) = param_4;
        lVar4 = local_108[1];
        *(long *)(lVar15 + -8) = local_108[1];
        FUN_1003fb4ec(FUN_1000e986c,lVar15 + -0x20,0xd0000000000000a9,0x8000000100887e20,
                      0xd00000000000002e,0x8000000100887f00,0x5a,0);
        uVar11 = 1;
      }
      *param_1 = uVar11;
      _swift_storeEnumTagMultiPayload(param_1,puVar5,1);
      (*local_110)(lVar4,local_108[0]);
      goto LAB_1000e4d78;
    }
  }
  uVar6 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar6);
  *(undefined4 *)(lVar15 + -0x20) = param_4;
  *(ulong *)(lVar15 + -0x18) = param_2;
  *(ulong *)(lVar15 + -0x10) = param_3;
  FUN_1003fb4ec(FUN_1000e9918,lVar15 + -0x30,0xd0000000000000a9,0x8000000100887e20,
                0xd00000000000002e,0x8000000100887f00,0x4f,0);
  *param_1 = 0;
  _swift_storeEnumTagMultiPayload(param_1,puVar5,1);
LAB_1000e4d78:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

