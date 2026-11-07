// rea decompile_all
// name: FUN_10039a7a4
// address: 0x10039a7a4
// body: available
// range: 0x10039a7a4-0x10039a967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039a7a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  if (DAT_100a89328 != -1) {
    _swift_once(&DAT_100a89328,FUN_1003e6ff4);
  }
  uVar1 = DAT_100b368e0;
  puVar2 = &DAT_100a8aa58;
  FUN_100004bb4(&DAT_100a8aa58,&DAT_10081ec20);
  puVar3 = puVar2;
  _swift_allocObject();
  puVar3[0x28] = 0;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = 0x6b636f4c6f747561;
  *(undefined8 *)(puVar3 + 0x20) = 0xe800000000000000;
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  puVar3 = puVar2;
  _swift_allocObject(puVar2,0x29,7);
  puVar3[0x28] = 0;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = 0x6d7265506574756d;
  *(undefined8 *)(puVar3 + 0x20) = 0xed0000746e656e61;
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  _swift_allocObject(puVar2,0x29,7);
  puVar2[0x28] = 0;
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = 0x747379536574756d;
  *(undefined8 *)(puVar2 + 0x20) = 0xea00000000006d65;
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = &DAT_100a8acb0;
  FUN_100004bb4(&DAT_100a8acb0,&DAT_10081f4a0);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = 0xd000000000000012;
  *(undefined8 *)(puVar2 + 0x20) = 0x80000001008aff40;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  puVar2 = &DAT_100a8aa60;
  FUN_100004bb4(&DAT_100a8aa60,&DAT_10081f510);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = 0xd000000000000011;
  *(undefined8 *)(puVar2 + 0x20) = 0x80000001008afe40;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined **)(unaff_x20 + 0x30) = puVar2;
  return;
}

