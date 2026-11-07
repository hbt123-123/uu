// rea decompile_all
// name: FUN_10015e1cc
// address: 0x10015e1cc
// body: available
// range: 0x10015e1cc-0x10015e287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015e1cc(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 auStack_128 [160];
  ulong local_88 [2];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 local_48;
  
  param_2 = param_2 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    local_88[0] = param_3 & 0xffffffff | param_1 << 0x20;
    local_88[1] = 1;
    local_78 = 1;
    uStack_68 = 0xc000000000000000;
    local_70 = 0;
    local_58 = 0x2000000000000000;
    local_48 = 0x1000000000000000;
    FUN_100193df4(auStack_128,local_88);
    FUN_1001bddd8(param_6,auStack_128);
    FUN_10016b308(auStack_128);
    _swift_unknownObjectRelease(param_2);
    FUN_100006cdc(0,0xc000000000000000);
  }
  return;
}

