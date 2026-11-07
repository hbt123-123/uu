// rea decompile_all
// name: FUN_10044d908
// address: 0x10044d908
// body: available
// range: 0x10044d908-0x10044da2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044da28 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044d908(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
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
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar5 = param_1[0x28];
    uVar1 = param_1[4];
    uVar3 = param_1[5];
    uVar2 = param_1[6];
    uVar4 = param_1[7];
    uVar11 = param_1[1];
    uVar9 = *param_1;
    uVar8 = param_1[3];
    uVar6 = param_1[2];
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    uVar12 = *(undefined8 *)(lVar5 + 0x58);
    uVar10 = *(undefined8 *)(lVar5 + 0x50);
    uVar16 = *(undefined8 *)(lVar5 + 0x28);
    uVar15 = *(undefined8 *)(lVar5 + 0x20);
    uVar14 = *(undefined8 *)(lVar5 + 0x38);
    uVar13 = *(undefined8 *)(lVar5 + 0x30);
    param_1[0xd] = *(undefined8 *)(lVar5 + 0x48);
    param_1[0xc] = uVar7;
    param_1[0xf] = uVar12;
    param_1[0xe] = uVar10;
    param_1[9] = uVar16;
    param_1[8] = uVar15;
    param_1[0xb] = uVar14;
    param_1[10] = uVar13;
    FUN_100040bb4(param_1 + 8,&DAT_100a9ff68,&DAT_10082b0d0);
    *(undefined8 *)(lVar5 + 0x28) = uVar11;
    *(undefined8 *)(lVar5 + 0x20) = uVar9;
    *(undefined8 *)(lVar5 + 0x38) = uVar8;
    *(undefined8 *)(lVar5 + 0x30) = uVar6;
    *(undefined8 *)(lVar5 + 0x40) = uVar1;
    *(ulong *)(lVar5 + 0x48) = uVar3 & 0xcfffffffffffffff;
    *(undefined8 *)(lVar5 + 0x50) = uVar2;
    *(ulong *)(lVar5 + 0x58) = uVar4 & 0xcfffffffffffffff | 0x1000000000000000;
  }
  else {
    lVar5 = param_1[0x28];
    param_1[0x1d] = param_1[5];
    param_1[0x1c] = param_1[4];
    param_1[0x1f] = param_1[7];
    param_1[0x1e] = param_1[6];
    param_1[0x19] = param_1[1];
    param_1[0x18] = *param_1;
    param_1[0x1b] = param_1[3];
    param_1[0x1a] = param_1[2];
    uVar1 = param_1[0x1c];
    uVar3 = param_1[0x1d];
    uVar2 = param_1[0x1e];
    uVar4 = param_1[0x1f];
    uVar11 = param_1[0x19];
    uVar9 = param_1[0x18];
    uVar8 = param_1[0x1b];
    uVar6 = param_1[0x1a];
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    uVar12 = *(undefined8 *)(lVar5 + 0x58);
    uVar10 = *(undefined8 *)(lVar5 + 0x50);
    uVar16 = *(undefined8 *)(lVar5 + 0x28);
    uVar15 = *(undefined8 *)(lVar5 + 0x20);
    uVar14 = *(undefined8 *)(lVar5 + 0x38);
    uVar13 = *(undefined8 *)(lVar5 + 0x30);
    param_1[0x15] = *(undefined8 *)(lVar5 + 0x48);
    param_1[0x14] = uVar7;
    param_1[0x17] = uVar12;
    param_1[0x16] = uVar10;
    param_1[0x11] = uVar16;
    param_1[0x10] = uVar15;
    param_1[0x13] = uVar14;
    param_1[0x12] = uVar13;
    FUN_100438e60(param_1 + 0x18,param_1 + 0x20);
    FUN_100040bb4(param_1 + 0x10,&DAT_100a9ff68,&DAT_10082b0d0);
    *(undefined8 *)(lVar5 + 0x28) = uVar11;
    *(undefined8 *)(lVar5 + 0x20) = uVar9;
    *(undefined8 *)(lVar5 + 0x38) = uVar8;
    *(undefined8 *)(lVar5 + 0x30) = uVar6;
    *(undefined8 *)(lVar5 + 0x40) = uVar1;
    *(ulong *)(lVar5 + 0x48) = uVar3 & 0xcfffffffffffffff;
    *(undefined8 *)(lVar5 + 0x50) = uVar2;
    *(ulong *)(lVar5 + 0x58) = uVar4 & 0xcfffffffffffffff | 0x1000000000000000;
    param_1[0xd] = param_1[5];
    param_1[0xc] = param_1[4];
    param_1[0xf] = param_1[7];
    param_1[0xe] = param_1[6];
    param_1[9] = param_1[1];
    param_1[8] = *param_1;
    param_1[0xb] = param_1[3];
    param_1[10] = param_1[2];
    FUN_100438e9c(param_1 + 8);
  }
  _free(param_1);
  return;
}

