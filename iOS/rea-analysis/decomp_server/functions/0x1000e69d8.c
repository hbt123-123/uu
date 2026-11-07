// rea decompile_all
// name: FUN_1000e69d8
// address: 0x1000e69d8
// body: available
// range: 0x1000e69d8-0x1000e6e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e6e54 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000e6bd0) */

void FUN_1000e69d8(ID *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  byte *pbVar8;
  ID self;
  ID IVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  long lVar14;
  long unaff_x21;
  byte *pbVar15;
  byte abStack_e0 [16];
  byte abStack_d0 [4];
  byte abStack_cc [4];
  byte abStack_c8 [8];
  undefined8 uStack_c0;
  ID IStack_b8;
  ulong uStack_b0;
  byte abStack_a8 [8];
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  ulong local_80;
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar6 = 0;
  local_88 = param_5;
  local_80 = param_6;
  __s10Foundation3URLVMa();
  local_98 = *(long *)(lVar6 + -8);
  lStack_90 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_98 + 0x40));
  self = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1000e984c();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar14 = self - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100a77e78;
  FUN_100004bb4(&DAT_100a77e78,&DAT_10080cca8);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar15 = (byte *)(lVar14 - extraout_x8_01);
  local_a0 = (undefined4)param_3;
  uStack_9c = (undefined4)param_4;
  FUN_1000e66f8(pbVar15,param_3,param_4);
  pbVar8 = pbVar15;
  _swift_getEnumCaseMultiPayload(pbVar15,puVar7);
  if ((int)pbVar8 == 1) {
    *param_1 = (ulong)*pbVar15;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    goto LAB_1000e6ce0;
  }
  FUN_1000823d8(pbVar15,lVar14,FUN_1000e984c);
  FUN_10004003c(0,&DAT_100a77d00,&PTR__OBJC_CLASS___NSFileHandle_100a658e8);
  (**(code **)(local_98 + 0x10))(self,lVar14 + *(int *)(lVar6 + 0x1c),lStack_90);
  FUN_1001877f4();
  uVar3 = local_88;
  if (unaff_x21 == 0) {
    local_70 = 0;
    IVar9 = _objc_msgSend(self,"seekToOffset:error:",local_88,&local_70);
    uVar4 = local_80;
    if ((int)IVar9 != 0) {
      IVar9 = self;
      uVar10 = local_80;
      FUN_1000ea404();
      uVar1 = (uint)(uVar10 >> 0x20);
      uVar11 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar11 == 0) {
          uVar13 = uVar10 >> 0x30 & 0xff;
        }
        else {
          iVar12 = (int)(IVar9 >> 0x20);
          if (SBORROW4(iVar12,(int)IVar9)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000e6e54);
            (*pcVar5)();
          }
          uVar13 = (ulong)(iVar12 - (int)IVar9);
        }
LAB_1000e6d5c:
        if (uVar13 == uVar4) goto LAB_1000e6d64;
LAB_1000e6d74:
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar2 = uStack_9c;
        *(undefined4 *)(pbVar15 + -0x30) = local_a0;
        *(undefined4 *)(pbVar15 + -0x2c) = uVar2;
        *(undefined8 *)(pbVar15 + -0x28) = uVar3;
        *(ulong *)(pbVar15 + -0x20) = uVar4;
        *(ID *)(pbVar15 + -0x18) = IVar9;
        *(ulong *)(pbVar15 + -0x10) = uVar10;
        FUN_1003fb4ec(FUN_1000ea5ec,pbVar15 + -0x40,0xd0000000000000a9,0x8000000100887e20,
                      0xd00000000000002a,0x8000000100888570,0xa0,0);
        FUN_100006cdc(IVar9,uVar10);
        param_1[1] = 0;
        *param_1 = 2;
        *(undefined1 *)(param_1 + 2) = 1;
      }
      else {
        if (uVar11 == 2) {
          uVar13 = *(long *)(IVar9 + 0x18) - *(long *)(IVar9 + 0x10);
          if (SBORROW8(*(long *)(IVar9 + 0x18),*(long *)(IVar9 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000e6d4c);
            (*pcVar5)();
          }
          goto LAB_1000e6d5c;
        }
        if (uVar4 != 0) goto LAB_1000e6d74;
LAB_1000e6d64:
        *param_1 = IVar9;
        param_1[1] = uVar10;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      FUN_1000e6e58(self);
      FUN_1000d27dc(lVar14,FUN_1000e984c);
      goto LAB_1000e6ce0;
    }
    unaff_x21 = local_70;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    FUN_1000e6e58(self);
  }
  uVar4 = local_80;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar2 = uStack_9c;
  *(undefined4 *)(pbVar15 + -0x20) = local_a0;
  *(undefined4 *)(pbVar15 + -0x1c) = uVar2;
  *(undefined8 *)(pbVar15 + -0x18) = uVar3;
  *(ulong *)(pbVar15 + -0x10) = uVar4;
  *(long *)(pbVar15 + -8) = unaff_x21;
  FUN_1003fb4ec(FUN_1000ea3f4,pbVar15 + -0x30,0xd0000000000000a9,0x8000000100887e20,
                0xd00000000000002a,0x8000000100888570,0xa5,0);
  _swift_errorRelease(unaff_x21);
  FUN_1000d27dc(lVar14,FUN_1000e984c);
  param_1[1] = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = 1;
LAB_1000e6ce0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

