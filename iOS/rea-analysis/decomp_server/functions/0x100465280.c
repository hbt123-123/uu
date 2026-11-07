// rea decompile_all
// name: FUN_100465280
// address: 0x100465280
// body: available
// range: 0x100465280-0x10046536b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100465368 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100465280(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_1 = (undefined8 *)*param_1;
  uVar9 = *param_1;
  bVar8 = *(byte *)(param_1 + 1);
  uVar1 = param_1[2];
  uVar4 = param_1[3];
  uVar10 = param_1[4];
  puVar5 = (undefined8 *)param_1[5];
  uVar2 = *puVar5;
  uVar6 = puVar5[1];
  uVar3 = puVar5[2];
  uVar7 = puVar5[3];
  uVar11 = puVar5[4];
  if ((param_2 & 1) == 0) {
    FUN_100139ca0(uVar2,uVar6,uVar3,uVar7,uVar11);
    *puVar5 = uVar9;
    puVar5[1] = (ulong)bVar8;
    puVar5[2] = uVar1;
    puVar5[3] = uVar4;
    puVar5[4] = uVar10;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    FUN_100008184(uVar4,uVar10);
    FUN_100139ca0(uVar2,uVar6,uVar3,uVar7,uVar11);
    *puVar5 = uVar9;
    puVar5[1] = (ulong)bVar8;
    puVar5[2] = uVar1;
    puVar5[3] = uVar4;
    puVar5[4] = uVar10;
    uVar1 = param_1[3];
    uVar10 = param_1[4];
    _swift_bridgeObjectRelease(param_1[2]);
    FUN_100006cdc(uVar1,uVar10);
  }
  _free(param_1);
  return;
}

