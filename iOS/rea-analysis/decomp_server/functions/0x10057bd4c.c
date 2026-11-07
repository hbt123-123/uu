// rea decompile_all
// name: FUN_10057bd4c
// address: 0x10057bd4c
// body: available
// range: 0x10057bd4c-0x10057beb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10057beb0 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057bd4c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
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
  
  pvVar2 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)((long)pvVar2 + 0x1b0);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x60);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x58);
    uVar11 = *(undefined8 *)((long)pvVar2 + 0x70);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x68);
    uVar16 = *(undefined8 *)((long)pvVar2 + 0x80);
    uVar14 = *(undefined8 *)((long)pvVar2 + 0x78);
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x88);
    uVar12 = *(undefined8 *)((long)pvVar2 + 0x50);
    uVar9 = *(undefined8 *)((long)pvVar2 + 0x48);
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)((long)pvVar2 + 0x98) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)((long)pvVar2 + 0x90) = uVar5;
    uVar13 = *(undefined8 *)(lVar3 + 0x68);
    uVar10 = *(undefined8 *)(lVar3 + 0x60);
    uVar7 = *(undefined8 *)(lVar3 + 0x78);
    uVar5 = *(undefined8 *)(lVar3 + 0x70);
    uVar17 = *(undefined8 *)(lVar3 + 0x58);
    uVar15 = *(undefined8 *)(lVar3 + 0x50);
    *(undefined8 *)((long)pvVar2 + 0xd0) = *(undefined8 *)(lVar3 + 0x80);
    *(undefined8 *)((long)pvVar2 + 0xb8) = uVar13;
    *(undefined8 *)((long)pvVar2 + 0xb0) = uVar10;
    *(undefined8 *)((long)pvVar2 + 200) = uVar7;
    *(undefined8 *)((long)pvVar2 + 0xc0) = uVar5;
    *(undefined8 *)((long)pvVar2 + 0xa8) = uVar17;
    *(undefined8 *)((long)pvVar2 + 0xa0) = uVar15;
    FUN_100040bb4((long)pvVar2 + 0x90,&DAT_100aab4a0,&DAT_100837c10);
    *(undefined8 *)(lVar3 + 0x68) = uVar11;
    *(undefined8 *)(lVar3 + 0x60) = uVar8;
    *(undefined8 *)(lVar3 + 0x78) = uVar16;
    *(undefined8 *)(lVar3 + 0x70) = uVar14;
    *(undefined8 *)(lVar3 + 0x80) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar12;
    *(undefined8 *)(lVar3 + 0x40) = uVar9;
    *(undefined8 *)(lVar3 + 0x58) = uVar6;
    *(undefined8 *)(lVar3 + 0x50) = uVar4;
  }
  else {
    lVar3 = *(long *)((long)pvVar2 + 0x1b0);
    uVar6 = *(undefined8 *)((long)pvVar2 + 0x50);
    uVar4 = *(undefined8 *)((long)pvVar2 + 0x48);
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x88);
    *(undefined8 *)((long)pvVar2 + 0x160) = uVar1;
    uVar10 = *(undefined8 *)((long)pvVar2 + 0x80);
    uVar8 = *(undefined8 *)((long)pvVar2 + 0x78);
    uVar14 = *(undefined8 *)((long)pvVar2 + 0x70);
    uVar12 = *(undefined8 *)((long)pvVar2 + 0x68);
    *(undefined8 *)((long)pvVar2 + 0x148) = uVar14;
    *(undefined8 *)((long)pvVar2 + 0x140) = uVar12;
    *(undefined8 *)((long)pvVar2 + 0x158) = uVar10;
    *(undefined8 *)((long)pvVar2 + 0x150) = uVar8;
    uVar17 = *(undefined8 *)((long)pvVar2 + 0x60);
    uVar16 = *(undefined8 *)((long)pvVar2 + 0x58);
    *(undefined8 *)((long)pvVar2 + 0x128) = uVar6;
    *(undefined8 *)((long)pvVar2 + 0x120) = uVar4;
    *(undefined8 *)((long)pvVar2 + 0x138) = uVar17;
    *(undefined8 *)((long)pvVar2 + 0x130) = uVar16;
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)((long)pvVar2 + 0xe0) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)((long)pvVar2 + 0xd8) = uVar5;
    uVar7 = *(undefined8 *)(lVar3 + 0x58);
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    uVar11 = *(undefined8 *)(lVar3 + 0x68);
    uVar9 = *(undefined8 *)(lVar3 + 0x60);
    uVar15 = *(undefined8 *)(lVar3 + 0x78);
    uVar13 = *(undefined8 *)(lVar3 + 0x70);
    *(undefined8 *)((long)pvVar2 + 0x118) = *(undefined8 *)(lVar3 + 0x80);
    *(undefined8 *)((long)pvVar2 + 0x110) = uVar15;
    *(undefined8 *)((long)pvVar2 + 0x108) = uVar13;
    *(undefined8 *)((long)pvVar2 + 0x100) = uVar11;
    *(undefined8 *)((long)pvVar2 + 0xf8) = uVar9;
    *(undefined8 *)((long)pvVar2 + 0xf0) = uVar7;
    *(undefined8 *)((long)pvVar2 + 0xe8) = uVar5;
    FUN_1005a8464((long)pvVar2 + 0x120,(long)pvVar2 + 0x168);
    FUN_100040bb4((long)pvVar2 + 0xd8,&DAT_100aab4a0,&DAT_100837c10);
    *(undefined8 *)(lVar3 + 0x68) = uVar14;
    *(undefined8 *)(lVar3 + 0x60) = uVar12;
    *(undefined8 *)(lVar3 + 0x78) = uVar10;
    *(undefined8 *)(lVar3 + 0x70) = uVar8;
    *(undefined8 *)(lVar3 + 0x80) = uVar1;
    *(undefined8 *)(lVar3 + 0x48) = uVar6;
    *(undefined8 *)(lVar3 + 0x40) = uVar4;
    *(undefined8 *)(lVar3 + 0x58) = uVar17;
    *(undefined8 *)(lVar3 + 0x50) = uVar16;
    *(undefined8 *)((long)pvVar2 + 0xd0) = *(undefined8 *)((long)pvVar2 + 0x88);
    *(undefined8 *)((long)pvVar2 + 0xb8) = *(undefined8 *)((long)pvVar2 + 0x70);
    *(undefined8 *)((long)pvVar2 + 0xb0) = *(undefined8 *)((long)pvVar2 + 0x68);
    *(undefined8 *)((long)pvVar2 + 200) = *(undefined8 *)((long)pvVar2 + 0x80);
    *(undefined8 *)((long)pvVar2 + 0xc0) = *(undefined8 *)((long)pvVar2 + 0x78);
    *(undefined8 *)((long)pvVar2 + 0x98) = *(undefined8 *)((long)pvVar2 + 0x50);
    *(undefined8 *)((long)pvVar2 + 0x90) = *(undefined8 *)((long)pvVar2 + 0x48);
    *(undefined8 *)((long)pvVar2 + 0xa8) = *(undefined8 *)((long)pvVar2 + 0x60);
    *(undefined8 *)((long)pvVar2 + 0xa0) = *(undefined8 *)((long)pvVar2 + 0x58);
    FUN_1005a8498((long)pvVar2 + 0x90);
  }
  _free(pvVar2);
  return;
}

