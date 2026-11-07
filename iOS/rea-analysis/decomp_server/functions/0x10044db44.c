// rea decompile_all
// name: FUN_10044db44
// address: 0x10044db44
// body: available
// range: 0x10044db44-0x10044dba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044dba4 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044db44(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  lVar2 = param_1[8];
  uVar1 = *(uint *)(param_1 + 9);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = *(undefined8 *)(lVar2 + 0x58);
  uVar4 = *(undefined8 *)(lVar2 + 0x50);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  uVar7 = *(undefined8 *)(lVar2 + 0x38);
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  param_1[5] = *(undefined8 *)(lVar2 + 0x48);
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  FUN_100040bb4(param_1,&DAT_100a9ff68,&DAT_10082b0d0);
  lVar2 = param_1[8];
  *(ulong *)(lVar2 + 0x20) = (ulong)uVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0x2000000000000000;
  _free(param_1);
  return;
}

