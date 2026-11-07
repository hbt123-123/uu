// rea decompile_all
// name: FUN_100417c00
// address: 0x100417c00
// body: available
// range: 0x100417c00-0x100417d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100417d70 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100417c00(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    puVar2 = (undefined8 *)param_1[0x2f];
    uVar1 = param_1[0x1c];
    uVar9 = param_1[0x15];
    uVar7 = param_1[0x14];
    uVar12 = param_1[0x17];
    uVar10 = param_1[0x16];
    uVar16 = param_1[0x19];
    uVar14 = param_1[0x18];
    uVar5 = param_1[0x1b];
    uVar3 = param_1[0x1a];
    uVar4 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar4;
    uVar13 = puVar2[5];
    uVar11 = puVar2[4];
    uVar6 = puVar2[7];
    uVar4 = puVar2[6];
    uVar8 = *(undefined8 *)((long)puVar2 + 0x39);
    uVar17 = puVar2[3];
    uVar15 = puVar2[2];
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)puVar2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    param_1[5] = uVar13;
    param_1[4] = uVar11;
    param_1[7] = uVar6;
    param_1[6] = uVar4;
    param_1[3] = uVar17;
    param_1[2] = uVar15;
    FUN_100040bb4(param_1,&DAT_100a9eea0,&DAT_100825d78);
    puVar2[1] = uVar9;
    *puVar2 = uVar7;
    puVar2[3] = uVar12;
    puVar2[2] = uVar10;
    puVar2[5] = uVar16;
    puVar2[4] = uVar14;
    puVar2[7] = uVar5;
    puVar2[6] = uVar3;
    puVar2[8] = uVar1 & 0xcfffffffffffffff;
    *(undefined1 *)(puVar2 + 9) = 0;
  }
  else {
    puVar2 = (undefined8 *)param_1[0x2f];
    param_1[0x1e] = param_1[0x15];
    param_1[0x1d] = param_1[0x14];
    param_1[0x20] = param_1[0x17];
    param_1[0x1f] = param_1[0x16];
    param_1[0x22] = param_1[0x19];
    param_1[0x21] = param_1[0x18];
    param_1[0x24] = param_1[0x1b];
    param_1[0x23] = param_1[0x1a];
    uVar1 = param_1[0x1c];
    param_1[0x25] = uVar1;
    uVar9 = param_1[0x1e];
    uVar7 = param_1[0x1d];
    uVar13 = param_1[0x20];
    uVar11 = param_1[0x1f];
    uVar17 = param_1[0x22];
    uVar15 = param_1[0x21];
    uVar5 = param_1[0x24];
    uVar3 = param_1[0x23];
    uVar4 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar4;
    uVar6 = puVar2[3];
    uVar4 = puVar2[2];
    uVar10 = puVar2[5];
    uVar8 = puVar2[4];
    uVar14 = puVar2[7];
    uVar12 = puVar2[6];
    uVar16 = *(undefined8 *)((long)puVar2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)puVar2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar16;
    param_1[5] = uVar10;
    param_1[4] = uVar8;
    param_1[7] = uVar14;
    param_1[6] = uVar12;
    param_1[3] = uVar6;
    param_1[2] = uVar4;
    FUN_10042c89c(param_1 + 0x1d,param_1 + 0x26);
    FUN_100040bb4(param_1,&DAT_100a9eea0,&DAT_100825d78);
    puVar2[1] = uVar9;
    *puVar2 = uVar7;
    puVar2[3] = uVar13;
    puVar2[2] = uVar11;
    puVar2[5] = uVar17;
    puVar2[4] = uVar15;
    puVar2[7] = uVar5;
    puVar2[6] = uVar3;
    puVar2[8] = uVar1 & 0xcfffffffffffffff;
    *(undefined1 *)(puVar2 + 9) = 0;
    param_1[0xf] = param_1[0x19];
    param_1[0xe] = param_1[0x18];
    param_1[0x11] = param_1[0x1b];
    param_1[0x10] = param_1[0x1a];
    param_1[0x12] = param_1[0x1c];
    param_1[0xb] = param_1[0x15];
    param_1[10] = param_1[0x14];
    param_1[0xd] = param_1[0x17];
    param_1[0xc] = param_1[0x16];
    FUN_10042c8d0(param_1 + 10);
  }
  _free(param_1);
  return;
}

