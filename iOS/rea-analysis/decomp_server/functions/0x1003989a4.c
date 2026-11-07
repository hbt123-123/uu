// rea decompile_all
// name: FUN_1003989a4
// address: 0x1003989a4
// body: available
// range: 0x1003989a4-0x100398a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003989a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *local_40;
  undefined *puStack_38;
  
  if (param_1 == 0) {
    local_40 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_1009b5db8;
    _swift_allocObject(&DAT_1009b5db8,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(long *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    local_40 = FUN_100398d78;
  }
  uVar1 = 0x4000001;
  _swift_getFunctionTypeMetadata1(0x4000001,param_3,PTR___sytN_100995e90 + 8);
  uVar2 = 0;
  FUN_100398d48(0,uVar1);
  puStack_38 = puVar3;
  _swift_allocObject();
  FUN_1003985ac(&local_40);
  return uVar2;
}

