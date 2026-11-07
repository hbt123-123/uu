// rea decompile_all
// name: FUN_100487524
// address: 0x100487524
// body: available
// range: 0x100487524-0x10048760b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100487608 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100487524(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = param_1[0x14];
  uVar3 = param_1[0x16];
  puVar1 = (undefined8 *)param_1[0x17];
  uVar4 = param_1[0x15];
  uVar5 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar5;
  uVar5 = puVar1[6];
  uVar7 = puVar1[9];
  uVar6 = puVar1[8];
  uVar11 = puVar1[3];
  uVar10 = puVar1[2];
  uVar9 = puVar1[5];
  uVar8 = puVar1[4];
  param_1[7] = puVar1[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[5] = uVar9;
  param_1[4] = uVar8;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(param_1,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[4] = 0x2000000000000000;
    puVar1[6] = 0x1000000000000000;
  }
  else {
    FUN_100008184(uVar2,uVar4);
    _swift_retain(uVar3);
    FUN_100040bb4(param_1,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[4] = 0x2000000000000000;
    puVar1[6] = 0x1000000000000000;
    uVar3 = param_1[0x16];
    FUN_100006cdc(param_1[0x14],param_1[0x15]);
    _swift_release(uVar3);
  }
  _free(param_1);
  return;
}

