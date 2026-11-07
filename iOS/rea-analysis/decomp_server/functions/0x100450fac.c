// rea decompile_all
// name: FUN_100450fac
// address: 0x100450fac
// body: available
// range: 0x100450fac-0x10045108f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045108c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100450fac(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  pbVar9 = (byte *)*param_1;
  uVar1 = *(undefined8 *)(pbVar9 + 0x20);
  lVar4 = *(long *)(pbVar9 + 0x28);
  bVar7 = *pbVar9;
  uVar8 = *(undefined8 *)(pbVar9 + 8);
  uVar10 = *(undefined8 *)(pbVar9 + 0x18);
  uVar12 = (ulong)pbVar9[0x10] | (ulong)*(uint *)(pbVar9 + 0x14) << 0x20;
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x30);
  uVar3 = *(undefined8 *)(lVar4 + 0x38);
  uVar6 = *(undefined8 *)(lVar4 + 0x40);
  uVar11 = *(undefined8 *)(lVar4 + 0x48);
  if ((param_2 & 1) == 0) {
    FUN_10000f4e0(uVar2,uVar5,uVar3,uVar6,uVar11);
    *(ulong *)(lVar4 + 0x28) = (ulong)bVar7;
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    *(ulong *)(lVar4 + 0x38) = uVar12;
    *(undefined8 *)(lVar4 + 0x40) = uVar10;
    *(undefined8 *)(lVar4 + 0x48) = uVar1;
  }
  else {
    FUN_100008184(uVar10,uVar1);
    FUN_10000f4e0(uVar2,uVar5,uVar3,uVar6,uVar11);
    *(ulong *)(lVar4 + 0x28) = (ulong)bVar7;
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    *(ulong *)(lVar4 + 0x38) = uVar12;
    *(undefined8 *)(lVar4 + 0x40) = uVar10;
    *(undefined8 *)(lVar4 + 0x48) = uVar1;
    FUN_100006cdc(*(undefined8 *)(pbVar9 + 0x18),*(undefined8 *)(pbVar9 + 0x20));
  }
  _free(pbVar9);
  return;
}

