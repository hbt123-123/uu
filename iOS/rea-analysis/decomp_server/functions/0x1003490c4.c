// rea decompile_all
// name: FUN_1003490c4
// address: 0x1003490c4
// body: available
// range: 0x1003490c4-0x1003491bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003490c4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (DAT_100a81bc8 != -1) {
    _swift_once(&DAT_100a81bc8,FUN_1003483b8);
  }
  uVar2 = DAT_100b365e0;
  lVar1 = DAT_100a81bd0;
  _swift_bridgeObjectRetain(DAT_100b365e0);
  if (lVar1 != -1) {
    _swift_once(&DAT_100a81bd0,FUN_100348474);
  }
  puVar3 = DAT_100b365e8;
  lVar1 = DAT_100a81bd8;
  puVar5 = DAT_100b365e8;
  _swift_bridgeObjectRetain();
  if (lVar1 != -1) {
    puVar5 = &DAT_100a81bd8;
    _swift_once(&DAT_100a81bd8,FUN_10034850c);
  }
  uVar4 = DAT_100b365f0;
  FUN_1003491bc();
  _swift_allocObject();
  puVar5[3] = 2;
  puVar5[2] = 2;
  puVar5[4] = 0x3fe0000000000000;
  puVar5[5] = uVar2;
  puVar5[6] = puVar3;
  puVar5[7] = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  return puVar5;
}

