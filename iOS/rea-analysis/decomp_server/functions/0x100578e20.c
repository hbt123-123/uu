// rea decompile_all
// name: FUN_100578e20
// address: 0x100578e20
// body: available
// range: 0x100578e20-0x100578f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100578f10 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100578e20(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
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
  
  pvVar1 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)((long)pvVar1 + 0x180);
    uVar6 = *(undefined8 *)((long)pvVar1 + 0x48);
    uVar3 = *(undefined8 *)((long)pvVar1 + 0x40);
    uVar11 = *(undefined8 *)((long)pvVar1 + 0x58);
    uVar9 = *(undefined8 *)((long)pvVar1 + 0x50);
    uVar7 = *(undefined8 *)((long)pvVar1 + 0x68);
    uVar4 = *(undefined8 *)((long)pvVar1 + 0x60);
    uVar12 = *(undefined8 *)((long)pvVar1 + 0x78);
    uVar10 = *(undefined8 *)((long)pvVar1 + 0x70);
    uVar5 = *(undefined8 *)(lVar2 + 0x40);
    uVar13 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x50);
    uVar17 = *(undefined8 *)(lVar2 + 0x28);
    uVar16 = *(undefined8 *)(lVar2 + 0x20);
    uVar15 = *(undefined8 *)(lVar2 + 0x38);
    uVar14 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)((long)pvVar1 + 0xa8) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)((long)pvVar1 + 0xa0) = uVar5;
    *(undefined8 *)((long)pvVar1 + 0xb8) = uVar13;
    *(undefined8 *)((long)pvVar1 + 0xb0) = uVar8;
    *(undefined8 *)((long)pvVar1 + 0x88) = uVar17;
    *(undefined8 *)((long)pvVar1 + 0x80) = uVar16;
    *(undefined8 *)((long)pvVar1 + 0x98) = uVar15;
    *(undefined8 *)((long)pvVar1 + 0x90) = uVar14;
    FUN_100040bb4((long)pvVar1 + 0x80,&DAT_100aab4c0,&DAT_100837c30);
    *(undefined8 *)(lVar2 + 0x28) = uVar6;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x38) = uVar11;
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    *(undefined8 *)(lVar2 + 0x48) = uVar7;
    *(undefined8 *)(lVar2 + 0x40) = uVar4;
    *(undefined8 *)(lVar2 + 0x58) = uVar12;
    *(undefined8 *)(lVar2 + 0x50) = uVar10;
  }
  else {
    lVar2 = *(long *)((long)pvVar1 + 0x180);
    uVar5 = *(undefined8 *)((long)pvVar1 + 0x48);
    uVar3 = *(undefined8 *)((long)pvVar1 + 0x40);
    uVar9 = *(undefined8 *)((long)pvVar1 + 0x58);
    uVar6 = *(undefined8 *)((long)pvVar1 + 0x50);
    *(undefined8 *)((long)pvVar1 + 0x108) = uVar5;
    *(undefined8 *)((long)pvVar1 + 0x100) = uVar3;
    *(undefined8 *)((long)pvVar1 + 0x118) = uVar9;
    *(undefined8 *)((long)pvVar1 + 0x110) = uVar6;
    uVar12 = *(undefined8 *)((long)pvVar1 + 0x68);
    uVar8 = *(undefined8 *)((long)pvVar1 + 0x60);
    uVar16 = *(undefined8 *)((long)pvVar1 + 0x78);
    uVar14 = *(undefined8 *)((long)pvVar1 + 0x70);
    *(undefined8 *)((long)pvVar1 + 0x128) = uVar12;
    *(undefined8 *)((long)pvVar1 + 0x120) = uVar8;
    *(undefined8 *)((long)pvVar1 + 0x138) = uVar16;
    *(undefined8 *)((long)pvVar1 + 0x130) = uVar14;
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar10 = *(undefined8 *)(lVar2 + 0x58);
    uVar7 = *(undefined8 *)(lVar2 + 0x50);
    uVar17 = *(undefined8 *)(lVar2 + 0x28);
    uVar15 = *(undefined8 *)(lVar2 + 0x20);
    uVar13 = *(undefined8 *)(lVar2 + 0x38);
    uVar11 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)((long)pvVar1 + 0xe8) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)((long)pvVar1 + 0xe0) = uVar4;
    *(undefined8 *)((long)pvVar1 + 0xf8) = uVar10;
    *(undefined8 *)((long)pvVar1 + 0xf0) = uVar7;
    *(undefined8 *)((long)pvVar1 + 200) = uVar17;
    *(undefined8 *)((long)pvVar1 + 0xc0) = uVar15;
    *(undefined8 *)((long)pvVar1 + 0xd8) = uVar13;
    *(undefined8 *)((long)pvVar1 + 0xd0) = uVar11;
    FUN_1005a8020((long)pvVar1 + 0x100,(long)pvVar1 + 0x140);
    FUN_100040bb4((long)pvVar1 + 0xc0,&DAT_100aab4c0,&DAT_100837c30);
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x38) = uVar9;
    *(undefined8 *)(lVar2 + 0x30) = uVar6;
    *(undefined8 *)(lVar2 + 0x48) = uVar12;
    *(undefined8 *)(lVar2 + 0x40) = uVar8;
    *(undefined8 *)(lVar2 + 0x58) = uVar16;
    *(undefined8 *)(lVar2 + 0x50) = uVar14;
    *(undefined8 *)((long)pvVar1 + 0xa8) = *(undefined8 *)((long)pvVar1 + 0x68);
    *(undefined8 *)((long)pvVar1 + 0xa0) = *(undefined8 *)((long)pvVar1 + 0x60);
    *(undefined8 *)((long)pvVar1 + 0xb8) = *(undefined8 *)((long)pvVar1 + 0x78);
    *(undefined8 *)((long)pvVar1 + 0xb0) = *(undefined8 *)((long)pvVar1 + 0x70);
    *(undefined8 *)((long)pvVar1 + 0x88) = *(undefined8 *)((long)pvVar1 + 0x48);
    *(undefined8 *)((long)pvVar1 + 0x80) = *(undefined8 *)((long)pvVar1 + 0x40);
    *(undefined8 *)((long)pvVar1 + 0x98) = *(undefined8 *)((long)pvVar1 + 0x58);
    *(undefined8 *)((long)pvVar1 + 0x90) = *(undefined8 *)((long)pvVar1 + 0x50);
    FUN_1005a8054((long)pvVar1 + 0x80);
  }
  _free(pvVar1);
  return;
}

