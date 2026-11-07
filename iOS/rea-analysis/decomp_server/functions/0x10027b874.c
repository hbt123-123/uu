// rea decompile_all
// name: FUN_10027b874
// address: 0x10027b874
// body: available
// range: 0x10027b874-0x10027ba13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10027b874(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar4 = 0;
  local_80 = 0;
  uStack_78 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x46);
  local_50 = local_80;
  uStack_48 = uStack_78;
  __sSS6appendyySSF(0xd000000000000044,0x80000001008a9680);
  lVar5 = param_2;
  FUN_1002d3c9c(param_1);
  if (lVar5 == 0) {
    local_90 = param_1;
    lStack_88 = param_2;
    FUN_100008184(param_1,param_2);
    puVar3 = &DAT_100a82788;
    FUN_100004bb4(&DAT_100a82788,&DAT_100816f50);
    _swift_dynamicCast(&local_c0,&local_90,PTR___s10Foundation4DataVN_1009961e8,puVar3,6);
    if ((uVar4 & 1) == 0) {
      local_a0 = 0;
      lStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      FUN_100040bb4(&local_c0,&DAT_100a82790,&DAT_1008178d0);
    }
    else {
      FUN_1000a0074(&local_c0,&local_80);
      uVar2 = uStack_60;
      uVar4 = local_68;
      FUN_10003f030(&local_80,local_68);
      __ss19_HasContiguousBytesP09_providesbC6NoCopySbvgTj(uVar4,uVar2);
      if ((uVar4 & 1) != 0) {
        FUN_10003f030(&local_80,local_68);
        __ss19_HasContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
                  (&local_c0,FUN_1002d38c0,0,PTR___sSSN_1009957f8,local_68,uStack_60);
        lVar5 = lStack_b8;
        FUN_10003f094(&local_80);
        goto LAB_10027b9e4;
      }
      FUN_10003f094(&local_80);
    }
    FUN_1002d3858(param_1,param_2);
    lVar5 = param_2;
  }
LAB_10027b9e4:
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(lVar5);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}

