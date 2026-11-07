// rea decompile_all
// name: FUN_10044d5a4
// address: 0x10044d5a4
// body: available
// range: 0x10044d5a4-0x10044d6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044d6bc to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044d5a4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
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
  
  param_1 = (undefined8 *)*param_1;
  lVar5 = param_1[0x16];
  if ((param_2 & 1) == 0) {
    uVar6 = param_1[0x10];
    uVar3 = *(undefined1 *)(param_1 + 0x11);
    uVar7 = param_1[0x12];
    uVar4 = *(undefined1 *)(param_1 + 0x13);
    uVar1 = param_1[0x14];
    uVar2 = param_1[0x15];
    uVar8 = *(undefined8 *)(lVar5 + 0x40);
    uVar10 = *(undefined8 *)(lVar5 + 0x58);
    uVar9 = *(undefined8 *)(lVar5 + 0x50);
    uVar14 = *(undefined8 *)(lVar5 + 0x28);
    uVar13 = *(undefined8 *)(lVar5 + 0x20);
    uVar12 = *(undefined8 *)(lVar5 + 0x38);
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
    param_1[5] = *(undefined8 *)(lVar5 + 0x48);
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    param_1[1] = uVar14;
    *param_1 = uVar13;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    FUN_100040bb4(param_1,&DAT_100a9ff68,&DAT_10082b0d0);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined1 *)(lVar5 + 0x28) = uVar3;
    *(undefined8 *)(lVar5 + 0x30) = uVar7;
    *(undefined1 *)(lVar5 + 0x38) = uVar4;
    *(undefined8 *)(lVar5 + 0x40) = uVar1;
    *(ulong *)(lVar5 + 0x48) = uVar2 & 0xcfffffffffffffff;
    *(undefined8 *)(lVar5 + 0x58) = 0;
  }
  else {
    uVar6 = param_1[0x10];
    uVar3 = *(undefined1 *)(param_1 + 0x11);
    uVar7 = param_1[0x12];
    uVar4 = *(undefined1 *)(param_1 + 0x13);
    uVar1 = param_1[0x14];
    uVar2 = param_1[0x15];
    uVar8 = *(undefined8 *)(lVar5 + 0x40);
    uVar10 = *(undefined8 *)(lVar5 + 0x58);
    uVar9 = *(undefined8 *)(lVar5 + 0x50);
    uVar14 = *(undefined8 *)(lVar5 + 0x28);
    uVar13 = *(undefined8 *)(lVar5 + 0x20);
    uVar12 = *(undefined8 *)(lVar5 + 0x38);
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
    param_1[5] = *(undefined8 *)(lVar5 + 0x48);
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    param_1[1] = uVar14;
    *param_1 = uVar13;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    FUN_100008184(uVar1);
    FUN_100040bb4(param_1,&DAT_100a9ff68,&DAT_10082b0d0);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    *(undefined1 *)(lVar5 + 0x28) = uVar3;
    *(undefined8 *)(lVar5 + 0x30) = uVar7;
    *(undefined1 *)(lVar5 + 0x38) = uVar4;
    *(undefined8 *)(lVar5 + 0x40) = uVar1;
    *(ulong *)(lVar5 + 0x48) = uVar2 & 0xcfffffffffffffff;
    *(undefined8 *)(lVar5 + 0x58) = 0;
    FUN_100006cdc(param_1[0x14],param_1[0x15]);
  }
  _free(param_1);
  return;
}

