// rea decompile_all
// name: FUN_100519340
// address: 0x100519340
// body: available
// range: 0x100519340-0x10051940b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100519340(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  if (DAT_100aa26a0 != -1) {
    _swift_once(&DAT_100aa26a0,FUN_100518d64);
  }
  lVar2 = DAT_100aab060;
  _swift_beginAccess(DAT_100aab060 + 0x10,auStack_48,0x20,0);
  lVar2 = *(long *)(lVar2 + 0x10);
  uStack_58 = 0;
  local_60 = 0;
  if (*(long *)(lVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar2);
    FUN_1001a2c70();
    if ((param_3 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 0x10);
      uStack_58 = puVar1[1];
      local_60 = *puVar1;
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  _swift_endAccess(auStack_48);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  return;
}

