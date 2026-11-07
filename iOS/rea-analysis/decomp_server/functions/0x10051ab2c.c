// rea decompile_all
// name: FUN_10051ab2c
// address: 0x10051ab2c
// body: available
// range: 0x10051ab2c-0x10051ac7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10051ab2c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar5 = (int)param_2;
  if (0x773593fe < iVar5 + 999999999U) {
    bVar4 = SCARRY8(param_1,(long)(iVar5 / 1000000000));
    param_1 = param_1 + (long)(iVar5 / 1000000000);
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10051ac80);
      (*pcVar3)();
    }
    param_2 = (ulong)(uint)(iVar5 % 1000000000);
  }
  iVar5 = (int)param_2;
  if ((iVar5 < 0) && (0 < (long)param_1)) {
    param_1 = param_1 - 1;
    iVar5 = iVar5 + 1000000000;
  }
  else {
    uVar1 = param_1;
    iVar2 = iVar5;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar1 = param_1 + 1;
      iVar2 = iVar5 + -1000000000;
    }
    if (0 < iVar5) {
      param_1 = uVar1;
      iVar5 = iVar2;
    }
  }
  if (param_1 - 0x4979cb9e01 < 0xffffff6d0c68c3ff) {
    local_40 = (undefined *)0x0;
    uStack_38 = (undefined *)0x0;
  }
  else {
    FUN_100562acc(iVar5);
    if ((iVar5 < 0) && (param_1 == 0)) {
      local_40 = (undefined *)0x302d;
      uStack_38 = (undefined *)0xe200000000000000;
    }
    else {
      local_40 = PTR___ss5Int64VN_100995cc0;
      uStack_38 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
    }
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(param_2);
    __sSS6appendyySSF(0x73,0xe100000000000000);
  }
  auVar6._8_8_ = uStack_38;
  auVar6._0_8_ = local_40;
  return auVar6;
}

