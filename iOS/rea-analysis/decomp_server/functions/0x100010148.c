// rea decompile_all
// name: FUN_100010148
// address: 0x100010148
// body: available
// range: 0x100010148-0x1000102d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100010148(long param_1,char param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined1 *local_50;
  ulong local_48;
  
  if (param_2 == '\0') {
    __ss11_StringGutsV4growyySiF(0x1d);
    _swift_bridgeObjectRelease(0xe000000000000000);
    puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    puVar2 = PTR___ss5Int32VN_100995c78;
    local_50 = &DAT_d000000000000018;
    local_48 = 0x800000010087a5e0;
    puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
    __sSS6appendyySSF(0x78,0xe100000000000000);
  }
  else {
    if (param_2 != '\x01') {
      pcVar1 = "pported display modes";
      local_50 = (undefined1 *)0xd000000000000022;
      if (param_1 != 0) {
        pcVar1 = "Unsupported resolution: ";
        local_50 = (undefined1 *)0xd000000000000025;
      }
      local_48 = (ulong)pcVar1 | 0x8000000000000000;
      goto LAB_1000102bc;
    }
    __ss11_StringGutsV4growyySiF(0x21);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_50 = (undefined1 *)0xd00000000000001f;
    local_48 = 0x800000010087a5c0;
    puVar2 = PTR___ss5Int32VN_100995c78;
    puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  }
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
LAB_1000102bc:
  auVar5._8_8_ = local_48;
  auVar5._0_8_ = local_50;
  return auVar5;
}

