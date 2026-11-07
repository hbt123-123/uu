// rea decompile_all
// name: FUN_10062a894
// address: 0x10062a894
// body: available
// range: 0x10062a894-0x10062aaeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062a894(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x21;
  undefined **ppuVar11;
  undefined **ppuVar12;
  code *pcVar13;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(ulong *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,uVar4);
  (**(code **)(uVar5 + 0x18))();
  uVar1 = 0x10;
  if ((uVar5 & 1) == 0) {
    uVar1 = uVar4;
  }
  uVar5 = *(ulong *)(unaff_x20 + 0x58);
  lVar10 = *(long *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,uVar5);
  (**(code **)(lVar10 + 8))(uVar5,lVar10);
  pcVar2 = thunk_FUN_10062b238;
  if ((uVar5 & 8) != 0) {
    pcVar2 = thunk_FUN_10062ab2c;
  }
  lVar10 = *(long *)(unaff_x20 + 0x60);
  FUN_10003f030(unaff_x20 + 0x40,*(undefined8 *)(unaff_x20 + 0x58));
  pcVar13 = *(code **)(lVar10 + 0x10);
  _swift_retain_n();
  (*pcVar13)(auStack_78,uVar1,pcVar2);
  _swift_release();
  if (unaff_x21 == 0) {
    FUN_1000b142c(auStack_78,auStack_a0);
    puVar6 = &DAT_100ab7f00;
    FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
    puVar7 = &DAT_100ab7f08;
    FUN_100004bb4(&DAT_100ab7f08,&DAT_100848d70);
    puVar8 = auStack_c8;
    _swift_dynamicCast(puVar8,auStack_a0,puVar6,puVar7,6);
    if ((int)puVar8 == 0) {
      uVar3 = *(undefined1 *)(unaff_x20 + 0x68);
      FUN_1000b142c(auStack_78,auStack_a0);
      lVar9 = 0;
      FUN_100634e1c();
      lVar10 = lVar9;
      _swift_allocObject();
      *(undefined **)(lVar10 + 0x48) = PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined8 *)(lVar10 + 0x10) = uVar1;
      *(undefined1 *)(lVar10 + 0x18) = uVar3;
      FUN_1000a0074(auStack_a0,lVar10 + 0x20);
      ppuVar11 = &PTR_PTR_1009e1958;
      ppuVar12 = &PTR_PTR_1009e1948;
    }
    else {
      FUN_10003f094(auStack_c8);
      uVar3 = *(undefined1 *)(unaff_x20 + 0x68);
      FUN_1000b142c(auStack_78,auStack_a0);
      lVar9 = 0;
      FUN_10067a468();
      lVar10 = lVar9;
      _swift_allocObject();
      *(undefined **)(lVar10 + 0x48) = PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined8 *)(lVar10 + 0x50) = 0;
      *(undefined8 *)(lVar10 + 0x10) = uVar1;
      *(undefined1 *)(lVar10 + 0x40) = uVar3;
      FUN_1000a0074(auStack_a0,lVar10 + 0x18);
      ppuVar11 = &PTR_PTR_1009e5ca8;
      ppuVar12 = &PTR_PTR_1009e5c98;
    }
    _swift_release();
    param_1[3] = lVar9;
    param_1[4] = (long)ppuVar12;
    param_1[5] = (long)ppuVar11;
    *param_1 = lVar10;
    FUN_10003f094(auStack_78);
  }
  else {
    _swift_release();
  }
  return;
}

