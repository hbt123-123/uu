// rea decompile_all
// name: FUN_100267fd0
// address: 0x100267fd0
// body: available
// range: 0x100267fd0-0x100268337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100267fd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,byte param_11)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long *plVar10;
  long alStack_c0 [2];
  long local_b0 [5];
  long local_88 [5];
  
  local_b0[0] = *unaff_x20;
  lVar3 = 0;
  local_b0[1] = param_5;
  local_b0[2] = param_6;
  local_b0[3] = param_3;
  local_b0[4] = param_4;
  local_88[0] = param_2;
  local_88[1] = param_8;
  local_88[2] = param_7;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  lVar8 = (long)local_b0 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100275594();
  plVar10 = (long *)(lVar8 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  if (((param_11 & 1) == 0) || (param_10 != 0)) {
    lVar3 = local_88[0];
    (**(code **)(local_b0[0] + 0xe0))
              (local_88[0],local_b0[3],local_b0[4],local_88[2],local_88[1],param_9,param_10,
               param_11 & 1);
    goto LAB_100268278;
  }
  FUN_100082394(param_9 + _TtC4Moya8Endpoint::task,plVar10,FUN_100275594);
  plVar5 = plVar10;
  _swift_getEnumCaseMultiPayload(plVar10,lVar4);
  iVar2 = (int)plVar5;
  if (5 < iVar2) {
    if (iVar2 < 9) {
      if (iVar2 == 6) {
        (**(code **)(lVar9 + 0x20))(lVar8,plVar10,lVar3);
        lVar4 = local_88[0];
        FUN_100268338(local_88[0],local_b0[3],local_b0[4],lVar8,local_b0[1],local_b0[2],local_88[2],
                      local_88[1]);
        uVar7 = 0;
        FUN_100264ccc();
        param_1[3] = uVar7;
        param_1[4] = &PTR_PTR_1009a8ca0;
        *param_1 = lVar4;
        (**(code **)(lVar9 + 8))(lVar8,lVar3);
        return;
      }
      if (iVar2 == 7) {
        lVar4 = *plVar10;
      }
      else {
        lVar4 = *plVar10;
        _swift_bridgeObjectRelease(plVar10[1]);
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        uVar6 = *(ulong *)(param_9 + 0x30);
        FUN_100266ca8(uVar6,*(undefined8 *)(param_9 + 0x38));
        if ((uVar6 & 1) != 0) {
          lVar3 = local_88[0];
          FUN_1002686d8(local_88[0],local_b0[3],local_b0[4],lVar4,local_b0[1],local_b0[2],
                        local_88[2],local_88[1]);
          _swift_bridgeObjectRelease(lVar4);
          goto LAB_100268278;
        }
      }
      local_88[3] = 0;
      local_88[4] = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x24);
      __ss26DefaultStringInterpolationV06appendC0yyxlF
                (local_88[0],*(undefined8 *)(local_b0[0] + 0x50));
      __sSS6appendyySSF(0xd000000000000022,0x80000001008a8550);
      lVar4 = local_88[4];
      lVar3 = local_88[3];
      *(undefined4 *)(plVar10 + -1) = 0;
      plVar10[-2] = 0x59;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,lVar3,lVar4,"Moya/MoyaProvider+Internal.swift",0x20,2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100268338);
      (*pcVar1)();
    }
    if (iVar2 == 9) {
      lVar4 = *plVar10;
      lVar8 = plVar10[1];
    }
    else {
      if (iVar2 != 10) goto LAB_100268260;
      _swift_bridgeObjectRelease(*plVar10);
      lVar4 = plVar10[6];
      lVar8 = plVar10[7];
      FUN_10003f094(plVar10 + 1);
    }
    plVar10[-2] = local_88[1];
    lVar3 = local_88[0];
    FUN_100268914(local_88[0],local_b0[3],local_b0[4],lVar4,lVar8,local_b0[1],local_b0[2],
                  local_88[2]);
    _swift_release(lVar8);
    goto LAB_100268278;
  }
  if (iVar2 < 3) {
    if ((iVar2 != 0) && (iVar2 != 1)) {
      _swift_release(plVar10[5]);
      plVar5 = plVar10;
      goto LAB_10026825c;
    }
LAB_100268120:
    FUN_1000d27dc(plVar10,FUN_100275594);
  }
  else {
    if (iVar2 == 3) {
      plVar5 = plVar10 + 1;
      _swift_bridgeObjectRelease(*plVar10);
    }
    else {
      if (iVar2 == 4) goto LAB_100268120;
      _swift_bridgeObjectRelease(*plVar10);
      _swift_bridgeObjectRelease(plVar10[6]);
      plVar5 = plVar10 + 1;
    }
LAB_10026825c:
    FUN_10003f094(plVar5);
  }
LAB_100268260:
  lVar3 = local_88[0];
  FUN_10026850c(local_88[0],local_b0[3],local_b0[4],local_b0[1],local_b0[2],local_88[2],local_88[1])
  ;
LAB_100268278:
  uVar7 = 0;
  FUN_100264ccc();
  param_1[3] = uVar7;
  param_1[4] = &PTR_PTR_1009a8ca0;
  *param_1 = lVar3;
  return;
}

