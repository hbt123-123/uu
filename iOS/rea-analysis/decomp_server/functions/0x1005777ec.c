// rea decompile_all
// name: FUN_1005777ec
// address: 0x1005777ec
// body: available
// range: 0x1005777ec-0x100577937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100577934 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005777ec(undefined8 *param_1,ulong param_2)

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
  undefined8 uVar18;
  undefined1 uStack_48;
  undefined7 local_47;
  
  pvVar1 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)((long)pvVar1 + 0x1e0);
    uVar7 = *(undefined8 *)((long)pvVar1 + 0x78);
    uVar3 = *(undefined8 *)((long)pvVar1 + 0x70);
    uVar11 = *(undefined8 *)((long)pvVar1 + 0x80);
    uStack_48 = (undefined1)*(undefined8 *)((long)pvVar1 + 0x88);
    uVar8 = *(undefined8 *)((long)pvVar1 + 0x91);
    uVar4 = *(undefined8 *)((long)pvVar1 + 0x89);
    local_47 = (undefined7)uVar4;
    uVar14 = *(undefined8 *)((long)pvVar1 + 0x58);
    uVar12 = *(undefined8 *)((long)pvVar1 + 0x50);
    uVar9 = *(undefined8 *)((long)pvVar1 + 0x68);
    uVar5 = *(undefined8 *)((long)pvVar1 + 0x60);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)((long)pvVar1 + 0xa8) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)((long)pvVar1 + 0xa0) = uVar6;
    uVar16 = *(undefined8 *)(lVar2 + 0x48);
    uVar15 = *(undefined8 *)(lVar2 + 0x40);
    uVar10 = *(undefined8 *)(lVar2 + 0x58);
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    uVar13 = *(undefined8 *)(lVar2 + 0x59);
    uVar18 = *(undefined8 *)(lVar2 + 0x38);
    uVar17 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)((long)pvVar1 + 0xe1) = *(undefined8 *)(lVar2 + 0x61);
    *(undefined8 *)((long)pvVar1 + 0xd9) = uVar13;
    *(undefined8 *)((long)pvVar1 + 200) = uVar16;
    *(undefined8 *)((long)pvVar1 + 0xc0) = uVar15;
    *(undefined8 *)((long)pvVar1 + 0xd8) = uVar10;
    *(undefined8 *)((long)pvVar1 + 0xd0) = uVar6;
    *(undefined8 *)((long)pvVar1 + 0xb8) = uVar18;
    *(undefined8 *)((long)pvVar1 + 0xb0) = uVar17;
    FUN_100040bb4((long)pvVar1 + 0xa0,&DAT_100aab4f8,&DAT_100838f20);
    *(undefined8 *)(lVar2 + 0x48) = uVar7;
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
    *(ulong *)(lVar2 + 0x58) = CONCAT71(local_47,uStack_48);
    *(undefined8 *)(lVar2 + 0x50) = uVar11;
    *(undefined8 *)(lVar2 + 0x61) = uVar8;
    *(undefined8 *)(lVar2 + 0x59) = uVar4;
    *(undefined8 *)(lVar2 + 0x28) = uVar14;
    *(undefined8 *)(lVar2 + 0x20) = uVar12;
    *(undefined8 *)(lVar2 + 0x38) = uVar9;
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
  }
  else {
    lVar2 = *(long *)((long)pvVar1 + 0x1e0);
    uVar5 = *(undefined8 *)((long)pvVar1 + 0x91);
    uVar3 = *(undefined8 *)((long)pvVar1 + 0x89);
    *(undefined8 *)((long)pvVar1 + 0x181) = uVar5;
    *(undefined8 *)((long)pvVar1 + 0x179) = uVar3;
    uVar12 = *(undefined8 *)((long)pvVar1 + 0x78);
    uVar10 = *(undefined8 *)((long)pvVar1 + 0x70);
    uVar7 = *(undefined8 *)((long)pvVar1 + 0x80);
    *(undefined8 *)((long)pvVar1 + 0x168) = uVar12;
    *(undefined8 *)((long)pvVar1 + 0x160) = uVar10;
    *(undefined8 *)((long)pvVar1 + 0x178) = *(undefined8 *)((long)pvVar1 + 0x88);
    *(undefined8 *)((long)pvVar1 + 0x170) = uVar7;
    uVar16 = *(undefined8 *)((long)pvVar1 + 0x58);
    uVar14 = *(undefined8 *)((long)pvVar1 + 0x50);
    uVar18 = *(undefined8 *)((long)pvVar1 + 0x68);
    uVar17 = *(undefined8 *)((long)pvVar1 + 0x60);
    *(undefined8 *)((long)pvVar1 + 0x148) = uVar16;
    *(undefined8 *)((long)pvVar1 + 0x140) = uVar14;
    *(undefined8 *)((long)pvVar1 + 0x158) = uVar18;
    *(undefined8 *)((long)pvVar1 + 0x150) = uVar17;
    uStack_48 = (undefined1)*(undefined8 *)((long)pvVar1 + 0x88);
    local_47 = (undefined7)uVar3;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)((long)pvVar1 + 0xf8) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)((long)pvVar1 + 0xf0) = uVar4;
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar9 = *(undefined8 *)(lVar2 + 0x48);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    uVar13 = *(undefined8 *)(lVar2 + 0x58);
    uVar11 = *(undefined8 *)(lVar2 + 0x50);
    uVar15 = *(undefined8 *)(lVar2 + 0x59);
    *(undefined8 *)((long)pvVar1 + 0x131) = *(undefined8 *)(lVar2 + 0x61);
    *(undefined8 *)((long)pvVar1 + 0x129) = uVar15;
    *(undefined8 *)((long)pvVar1 + 0x118) = uVar9;
    *(undefined8 *)((long)pvVar1 + 0x110) = uVar8;
    *(undefined8 *)((long)pvVar1 + 0x128) = uVar13;
    *(undefined8 *)((long)pvVar1 + 0x120) = uVar11;
    *(undefined8 *)((long)pvVar1 + 0x108) = uVar6;
    *(undefined8 *)((long)pvVar1 + 0x100) = uVar4;
    FUN_1005a7ef4((long)pvVar1 + 0x140,(long)pvVar1 + 400);
    FUN_100040bb4((long)pvVar1 + 0xf0,&DAT_100aab4f8,&DAT_100838f20);
    *(undefined8 *)(lVar2 + 0x48) = uVar12;
    *(undefined8 *)(lVar2 + 0x40) = uVar10;
    *(ulong *)(lVar2 + 0x58) = CONCAT71(local_47,uStack_48);
    *(undefined8 *)(lVar2 + 0x50) = uVar7;
    *(undefined8 *)(lVar2 + 0x61) = uVar5;
    *(undefined8 *)(lVar2 + 0x59) = uVar3;
    *(undefined8 *)(lVar2 + 0x28) = uVar16;
    *(undefined8 *)(lVar2 + 0x20) = uVar14;
    *(undefined8 *)(lVar2 + 0x38) = uVar18;
    *(undefined8 *)(lVar2 + 0x30) = uVar17;
    *(undefined8 *)((long)pvVar1 + 0xe1) = *(undefined8 *)((long)pvVar1 + 0x91);
    *(undefined8 *)((long)pvVar1 + 0xd9) = *(undefined8 *)((long)pvVar1 + 0x89);
    *(undefined8 *)((long)pvVar1 + 200) = *(undefined8 *)((long)pvVar1 + 0x78);
    *(undefined8 *)((long)pvVar1 + 0xc0) = *(undefined8 *)((long)pvVar1 + 0x70);
    *(undefined8 *)((long)pvVar1 + 0xd8) = *(undefined8 *)((long)pvVar1 + 0x88);
    *(undefined8 *)((long)pvVar1 + 0xd0) = *(undefined8 *)((long)pvVar1 + 0x80);
    *(undefined8 *)((long)pvVar1 + 0xa8) = *(undefined8 *)((long)pvVar1 + 0x58);
    *(undefined8 *)((long)pvVar1 + 0xa0) = *(undefined8 *)((long)pvVar1 + 0x50);
    *(undefined8 *)((long)pvVar1 + 0xb8) = *(undefined8 *)((long)pvVar1 + 0x68);
    *(undefined8 *)((long)pvVar1 + 0xb0) = *(undefined8 *)((long)pvVar1 + 0x60);
    FUN_1005a7f28((long)pvVar1 + 0xa0);
  }
  _free(pvVar1);
  return;
}

