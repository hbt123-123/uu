// rea decompile_all
// name: FUN_10054e2ec
// address: 0x10054e2ec
// body: available
// range: 0x10054e2ec-0x10054e3db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10054e2ec(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined *puStack_38;
  
  local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)(param_1 + 0x10));
  puVar4 = &DAT_1009d1770;
  puVar3 = &local_68;
  __sSS10reflectingSSx_tclufC();
  local_40 = puVar3;
  puStack_38 = puVar4;
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  local_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  local_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  puVar4 = &DAT_1009d17f0;
  __sSS10reflectingSSx_tclufC(&local_68,&DAT_1009d17f0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  local_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  _swift_bridgeObjectRetain();
  puVar4 = PTR___sSSN_1009957f8;
  __sSS10reflectingSSx_tclufC(&local_68,PTR___sSSN_1009957f8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  auVar2._8_8_ = puStack_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}

