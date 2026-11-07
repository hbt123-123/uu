// rea decompile_all
// name: FUN_100666140
// address: 0x100666140
// body: available
// range: 0x100666140-0x10066620b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006661c8) */

void FUN_100666140(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_100665cbc();
  lVar1 = 0;
  FUN_1006730b4();
  _swift_initStackObject();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  puVar2 = &DAT_100ab7cb8;
  FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
  _swift_initStaticObject();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  lVar3 = param_1;
  FUN_1006727b8(param_1,param_1 + 0x20,0,*(long *)(param_1 + 0x10) << 1 | 1,1);
  _swift_release(lVar1);
  _swift_bridgeObjectRelease(param_1);
  thunk_FUN_1006654ec(lVar3);
  return;
}

