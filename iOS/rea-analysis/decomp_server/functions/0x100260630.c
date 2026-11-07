// rea decompile_all
// name: FUN_100260630
// address: 0x100260630
// body: available
// range: 0x100260630-0x10026068f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026068c to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100260630(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &DAT_100a807e0;
  FUN_100004bb4(&DAT_100a807e0,&DAT_100814f50);
  param_1[3] = puVar1;
  FUN_1002582ac();
  param_1[4] = puVar1;
  *param_1 = uVar3;
  uVar2 = 0;
  FUN_100275594(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,1);
  _swift_bridgeObjectRetain(uVar3);
  return;
}

