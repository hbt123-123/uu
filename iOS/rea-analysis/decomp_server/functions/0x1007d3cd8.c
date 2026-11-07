// rea decompile_all
// name: FUN_1007d3cd8
// address: 0x1007d3cd8
// body: available
// range: 0x1007d3cd8-0x1007d3e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007d3cd8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = &DAT_100abd098;
  FUN_1007b4550();
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 0xc;
  *(undefined8 *)(puVar2 + 0x10) = 6;
  *(undefined8 *)(puVar2 + 0x20) = 0x635f737574617473;
  *(undefined8 *)(puVar2 + 0x28) = 0xeb0000000065646f;
  *(undefined8 *)(puVar2 + 0x30) = 0x646f6874656d;
  *(undefined8 *)(puVar2 + 0x38) = 0xe600000000000000;
  *(undefined8 *)(puVar2 + 0x40) = 0xd000000000000012;
  *(undefined8 *)(puVar2 + 0x48) = 0x80000001008dbce0;
  *(undefined8 *)(puVar2 + 0x50) = 0xd000000000000011;
  *(undefined8 *)(puVar2 + 0x58) = 0x80000001008dbd00;
  *(undefined8 *)(puVar2 + 0x60) = 0x6575712e70747468;
  lVar1 = _TtC6Sentry34SentrySRDefaultBreadcrumbConverter::supportedNetworkData;
  *(undefined8 *)(puVar2 + 0x68) = 0xea00000000007972;
  *(undefined8 *)(puVar2 + 0x70) = 0x6172662e70747468;
  *(undefined8 *)(puVar2 + 0x78) = 0xed0000746e656d67;
  puVar3 = puVar2;
  FUN_1007d4864();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,6,PTR___sSSN_1009957f8);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  FUN_1007d3e9c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff30,"init");
  return;
}

