// rea decompile_all
// name: FUN_10062a680
// address: 0x10062a680
// body: available
// range: 0x10062a680-0x10062a893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062a680(long *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long unaff_x20;
  long unaff_x21;
  code *pcVar12;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar9 = *(ulong *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,uVar8);
  (**(code **)(uVar9 + 0x18))();
  uVar1 = 0x10;
  if ((uVar9 & 1) == 0) {
    uVar1 = uVar8;
  }
  lVar7 = *(long *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,*(undefined8 *)(unaff_x20 + 0x58));
  pcVar12 = *(code **)(lVar7 + 0x10);
  _swift_retain_n();
  (*pcVar12)(auStack_78,uVar1,thunk_FUN_10062ab2c);
  _swift_release_n();
  if (unaff_x21 == 0) {
    FUN_1000b142c(auStack_78,auStack_a0);
    puVar3 = &DAT_100ab7f00;
    FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
    puVar4 = &DAT_100ab7f08;
    FUN_100004bb4(&DAT_100ab7f08,&DAT_100848d70);
    puVar5 = auStack_c8;
    _swift_dynamicCast(puVar5,auStack_a0,puVar3,puVar4,6);
    if ((int)puVar5 == 0) {
      uVar2 = *(undefined1 *)(unaff_x20 + 0x68);
      FUN_1000b142c(auStack_78,auStack_a0);
      lVar6 = 0;
      FUN_100635618();
      lVar7 = lVar6;
      _swift_allocObject();
      uVar8 = 0;
      FUN_1006295a0(0,0x10,0,PTR___swiftEmptyArrayStorage_100995ea0);
      *(undefined8 *)(lVar7 + 0x48) = uVar8;
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x10) = uVar1;
      *(undefined1 *)(lVar7 + 0x40) = uVar2;
      FUN_1000a0074(auStack_a0,lVar7 + 0x18);
      ppuVar10 = &PTR_PTR_1009e1a80;
      ppuVar11 = &PTR_PTR_1009e1a70;
    }
    else {
      FUN_10003f094(auStack_c8);
      uVar2 = *(undefined1 *)(unaff_x20 + 0x68);
      FUN_1000b142c(auStack_78,auStack_a0);
      lVar6 = 0;
      FUN_10067aca0();
      lVar7 = lVar6;
      _swift_allocObject();
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x10) = uVar1;
      *(undefined1 *)(lVar7 + 0x40) = uVar2;
      FUN_1000a0074(auStack_a0,lVar7 + 0x18);
      ppuVar10 = &PTR_PTR_1009e5dd0;
      ppuVar11 = &PTR_PTR_1009e5dc0;
    }
    param_1[3] = lVar6;
    param_1[4] = (long)ppuVar11;
    param_1[5] = (long)ppuVar10;
    *param_1 = lVar7;
    FUN_10003f094(auStack_78);
  }
  return;
}

