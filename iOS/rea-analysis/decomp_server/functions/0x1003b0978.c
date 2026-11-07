// rea decompile_all
// name: FUN_1003b0978
// address: 0x1003b0978
// body: available
// range: 0x1003b0978-0x1003b0beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003b0978(undefined1 *param_1,long param_2,byte param_3)

{
  char *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 *local_40;
  ulong local_38;
  
  if (param_3 < 5) {
    if (param_3 < 2) {
      pcVar1 = "/api/v1/room/create/refetch";
      local_40 = &DAT_d000000000000013;
      if (param_3 != 0) {
        pcVar1 = "/api/v1/guest/room/create";
        local_40 = (undefined1 *)0xd00000000000001b;
      }
      local_38 = (ulong)pcVar1 | 0x8000000000000000;
      goto LAB_1003b0bd8;
    }
    if (param_3 == 2) {
      local_38 = 0x80000001008b3a10;
      local_40 = (undefined1 *)0xd000000000000022;
      goto LAB_1003b0bd8;
    }
    if (param_3 != 3) {
      local_38 = 0x80000001008b39c0;
      local_40 = (undefined1 *)0xd000000000000020;
      goto LAB_1003b0bd8;
    }
    __ss11_StringGutsV4growyySiF(0x1d);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_40 = (undefined1 *)0xd00000000000001b;
    local_38 = 0x80000001008b39f0;
LAB_1003b0b44:
    __sSS6appendyySSF(param_1,param_2);
  }
  else {
    if (param_3 < 7) {
      pcVar1 = "/api/v1/app/global/whitelist";
      local_40 = (undefined1 *)0xd00000000000001c;
      pcVar4 = "/api/v1/event/report/batch";
      puVar3 = &DAT_d000000000000018;
      bVar2 = param_3 == 5;
    }
    else {
      if (param_3 == 7) {
        __ss11_StringGutsV4growyySiF(0x24);
        _swift_bridgeObjectRelease(0xe000000000000000);
        local_40 = (undefined1 *)0x2f31762f6970612f;
        local_38 = 0xef2f656369766564;
        __sSS6appendyySSF(param_1,param_2);
        param_2 = -0x7ffffffeff74c710;
        param_1 = &DAT_d000000000000013;
        goto LAB_1003b0b44;
      }
      if (param_3 == 8) {
        local_38 = 0x80000001008b3a40;
        local_40 = (undefined1 *)0xd000000000000019;
        goto LAB_1003b0bd8;
      }
      pcVar1 = "/api/v1/tool/fp/token";
      local_40 = (undefined1 *)0xd000000000000015;
      pcVar4 = "/api/v1/device/wallpaper";
      puVar3 = (undefined1 *)0xd000000000000024;
      if (param_1 != (undefined1 *)0x1 || param_2 != 0) {
        pcVar4 = "/screensaver/detail";
        puVar3 = (undefined1 *)0xd00000000000001a;
      }
      bVar2 = param_1 == (undefined1 *)0x0 && param_2 == 0;
    }
    pcVar1 = pcVar1 + -0x20;
    if (!bVar2) {
      pcVar1 = pcVar4;
      local_40 = puVar3;
    }
    local_38 = (ulong)pcVar1 | 0x8000000000000000;
  }
LAB_1003b0bd8:
  auVar5._8_8_ = local_38;
  auVar5._0_8_ = local_40;
  return auVar5;
}

