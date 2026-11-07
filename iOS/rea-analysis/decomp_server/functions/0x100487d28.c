// rea decompile_all
// name: FUN_100487d28
// address: 0x100487d28
// body: available
// range: 0x100487d28-0x100487e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100487e80 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100487d28(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar6 = (ulong *)*param_1;
  puVar7 = (ulong *)puVar6[0x1b];
  if ((param_2 & 1) == 0) {
    uVar3 = puVar6[0x14];
    uVar8 = puVar6[0x15];
    uVar4 = puVar6[0x16];
    uVar9 = puVar6[0x17];
    uVar5 = puVar6[0x18];
    uVar1 = puVar6[0x19];
    uVar2 = puVar6[0x1a];
    uVar10 = *puVar7;
    puVar6[1] = puVar7[1];
    *puVar6 = uVar10;
    uVar10 = puVar7[6];
    uVar12 = puVar7[9];
    uVar11 = puVar7[8];
    uVar16 = puVar7[3];
    uVar15 = puVar7[2];
    uVar14 = puVar7[5];
    uVar13 = puVar7[4];
    puVar6[7] = puVar7[7];
    puVar6[6] = uVar10;
    puVar6[9] = uVar12;
    puVar6[8] = uVar11;
    puVar6[3] = uVar16;
    puVar6[2] = uVar15;
    puVar6[5] = uVar14;
    puVar6[4] = uVar13;
    FUN_100040bb4(puVar6,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar7 = (ulong)(uint)uVar3;
    puVar7[1] = uVar8;
    *(char *)(puVar7 + 2) = (char)uVar4;
    puVar7[3] = uVar9;
    *(char *)(puVar7 + 4) = (char)uVar5;
    *(undefined1 *)((long)puVar7 + 0x27) = 0x20;
    *(undefined2 *)((long)puVar7 + 0x25) = 0;
    *(undefined4 *)((long)puVar7 + 0x21) = 0;
    puVar7[5] = uVar1;
    puVar7[6] = uVar2 & 0xcfffffffffffffff | 0x2000000000000000;
  }
  else {
    uVar3 = puVar6[0x14];
    uVar8 = puVar6[0x15];
    uVar4 = puVar6[0x16];
    uVar9 = puVar6[0x17];
    uVar5 = puVar6[0x18];
    uVar1 = puVar6[0x19];
    uVar2 = puVar6[0x1a];
    uVar10 = *puVar7;
    puVar6[1] = puVar7[1];
    *puVar6 = uVar10;
    uVar10 = puVar7[6];
    uVar12 = puVar7[9];
    uVar11 = puVar7[8];
    uVar16 = puVar7[3];
    uVar15 = puVar7[2];
    uVar14 = puVar7[5];
    uVar13 = puVar7[4];
    puVar6[7] = puVar7[7];
    puVar6[6] = uVar10;
    puVar6[9] = uVar12;
    puVar6[8] = uVar11;
    puVar6[3] = uVar16;
    puVar6[2] = uVar15;
    puVar6[5] = uVar14;
    puVar6[4] = uVar13;
    FUN_100008184(uVar1);
    FUN_100040bb4(puVar6,&DAT_100aa0b98,&DAT_10082dd80);
    *puVar7 = (ulong)(uint)uVar3;
    puVar7[1] = uVar8;
    *(char *)(puVar7 + 2) = (char)uVar4;
    puVar7[3] = uVar9;
    *(char *)(puVar7 + 4) = (char)uVar5;
    *(undefined1 *)((long)puVar7 + 0x27) = 0x20;
    *(undefined2 *)((long)puVar7 + 0x25) = 0;
    *(undefined4 *)((long)puVar7 + 0x21) = 0;
    puVar7[5] = uVar1;
    puVar7[6] = uVar2 & 0xcfffffffffffffff | 0x2000000000000000;
    FUN_100006cdc(puVar6[0x19],puVar6[0x1a]);
  }
  _free(puVar6);
  return;
}

