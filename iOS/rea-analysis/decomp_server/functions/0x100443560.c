// rea decompile_all
// name: FUN_100443560
// address: 0x100443560
// body: available
// range: 0x100443560-0x100443687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100443628 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100443560(byte *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  puVar4 = *(ulong **)(param_1 + 0x18);
  puVar11 = puVar4 + 3;
  uVar9 = *puVar11;
  bVar7 = *param_1;
  uVar10 = *(ulong *)(param_1 + 8);
  uVar2 = *puVar4;
  uVar5 = puVar4[1];
  uVar12 = puVar4[2];
  uVar3 = puVar4[4];
  uVar6 = puVar4[5];
  uVar8 = puVar4[6];
  if ((param_2 & 1) != 0) {
    FUN_100008184(uVar10,uVar1);
    FUN_1000407fc(uVar2,uVar5,uVar12,uVar9,uVar3,uVar6,(ulong)(uint5)uVar8);
    *puVar4 = (ulong)bVar7;
    puVar4[1] = uVar10;
    puVar4[2] = uVar1;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *puVar11 = 0;
    *(undefined1 *)((long)puVar4 + 0x34) = 0x80;
    *(undefined4 *)(puVar4 + 6) = 0;
    FUN_100006cdc(uVar10,uVar1);
    return;
  }
  FUN_1000407fc(uVar2,uVar5,uVar12,uVar9,uVar3,uVar6,(ulong)(uint5)uVar8);
  *puVar4 = (ulong)bVar7;
  puVar4[1] = uVar10;
  puVar4[2] = uVar1;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *puVar11 = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  *(undefined1 *)((long)puVar4 + 0x34) = 0x80;
  return;
}

