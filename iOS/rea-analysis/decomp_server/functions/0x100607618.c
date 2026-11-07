// rea decompile_all
// name: FUN_100607618
// address: 0x100607618
// body: available
// range: 0x100607618-0x1006076d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100607618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  code *local_40;
  undefined *puStack_38;
  
  lVar3 = *unaff_x20;
  puVar1 = &DAT_1009de610;
  _swift_allocObject(&DAT_1009de610,0x28,7);
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  local_40 = FUN_100398d78;
  puStack_38 = puVar1;
  _swift_beginAccess(unaff_x20 + 2,auStack_58,0x21,0);
  uVar2 = 0x4000001;
  _swift_getFunctionTypeMetadata1(0x4000001,uVar4,PTR___sytN_100995e90 + 8);
  uVar4 = 0;
  __sSaMa(0,uVar2);
  _swift_retain(param_2);
  __sSa6appendyyxnF(&local_40,uVar4);
  _swift_endAccess(auStack_58);
  return;
}

