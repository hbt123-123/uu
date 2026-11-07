// rea decompile_all
// name: FUN_1000b3ad0
// address: 0x1000b3ad0
// body: available
// range: 0x1000b3ad0-0x1000b3b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b3ad0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long local_30;
  undefined1 local_28 [8];
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if ((*(long *)(param_2 + 0x10) != 0) && (uVar3 = param_2, FUN_1000811b0(), (uVar3 & 1) != 0)) {
      _swift_retain(*(undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8));
    }
  }
  else {
    lVar1 = param_1;
    _swift_retain();
    __ss17__CocoaDictionaryV6lookupyyXlSgyXlF();
    _swift_release(param_1);
    if (lVar1 != 0) {
      puVar2 = &DAT_100104458;
      local_30 = lVar1;
      FUN_10000eb08(&DAT_100104458,&DAT_1000d48f0);
      _swift_dynamicCast(local_28,&local_30,PTR___syXlN_1000f0720 + 8,puVar2,7);
    }
  }
  return;
}

