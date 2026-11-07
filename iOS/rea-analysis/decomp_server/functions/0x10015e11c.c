// rea decompile_all
// name: FUN_10015e11c
// address: 0x10015e11c
// body: available
// range: 0x10015e11c-0x10015e1cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015e11c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_118 [160];
  ulong local_78 [2];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 local_38;
  
  param_1 = param_1 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    local_78[0] = param_2 & 0xffffffff;
    local_78[1] = 2;
    local_68 = 1;
    uStack_58 = 0xc000000000000000;
    local_60 = 0;
    local_48 = 0x2000000000000000;
    local_38 = 0x1000000000000000;
    FUN_100193df4(auStack_118,local_78);
    FUN_1001bddd8(param_5,auStack_118);
    FUN_10016b308(auStack_118);
    _swift_unknownObjectRelease(param_1);
    FUN_100006cdc(0,0xc000000000000000);
  }
  return;
}

