// rea decompile_all
// name: FUN_100486970
// address: 0x100486970
// body: available
// range: 0x100486970-0x100486a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100486a64 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100486970(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar6 = (ulong *)*param_1;
  uVar1 = puVar6[0x18];
  puVar3 = (ulong *)puVar6[0x19];
  uVar5 = puVar6[0x14];
  uVar2 = puVar6[0x15];
  uVar4 = puVar6[0x16];
  uVar7 = puVar6[0x17];
  uVar8 = uVar1 & 0xcfffffffffffffff;
  uVar9 = *puVar3;
  puVar6[1] = puVar3[1];
  *puVar6 = uVar9;
  uVar9 = puVar3[6];
  uVar11 = puVar3[9];
  uVar10 = puVar3[8];
  uVar15 = puVar3[3];
  uVar14 = puVar3[2];
  uVar13 = puVar3[5];
  uVar12 = puVar3[4];
  puVar6[7] = puVar3[7];
  puVar6[6] = uVar9;
  puVar6[9] = uVar11;
  puVar6[8] = uVar10;
  puVar6[3] = uVar15;
  puVar6[2] = uVar14;
  puVar6[5] = uVar13;
  puVar6[4] = uVar12;
  if ((param_2 & 1) == 0) {
    FUN_100040bb4(puVar6,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar3 = (ulong)(byte)uVar5;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    puVar3[3] = uVar7;
    puVar3[4] = uVar8;
    puVar3[6] = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar4);
    FUN_100008184(uVar7,uVar1);
    FUN_100040bb4(puVar6,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar3 = (ulong)(byte)uVar5;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    puVar3[3] = uVar7;
    puVar3[4] = uVar8;
    puVar3[6] = 0;
    uVar2 = puVar6[0x16];
    uVar1 = puVar6[0x17];
    uVar4 = puVar6[0x18];
    _swift_bridgeObjectRelease(puVar6[0x15]);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100006cdc(uVar1,uVar4);
  }
  _free(puVar6);
  return;
}

