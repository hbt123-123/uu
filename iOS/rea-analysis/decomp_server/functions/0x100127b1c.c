// rea decompile_all
// name: FUN_100127b1c
// address: 0x100127b1c
// body: available
// range: 0x100127b1c-0x100127d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100127b1c(ulong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  
  puVar4 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_100127240();
  lVar12 = (long)*(int *)(lVar6 + 0x24);
  FUN_10007f314(unaff_x20 + lVar12,puVar10,&DAT_100a76718,&DAT_10080ccc0);
  puVar7 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar5);
  if ((int)puVar7 == 1) {
    FUN_100040bb4(puVar10,&DAT_100a76718,&DAT_10080ccc0);
  }
  else {
    lVar8 = lVar9;
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar5);
    FUN_100127d64();
    __sSL1loiySbx_xtFZTj(param_1,lVar9,lVar5,lVar8);
    if ((param_1 & 1) == 0) {
      puVar1 = (undefined4 *)(unaff_x20 + *(int *)(lVar6 + 0x1c));
      if ((*(byte *)(puVar1 + 1) & 1) == 0) {
        FUN_100127da8(*puVar1);
      }
      FUN_100040bb4();
      lVar8 = 0;
      __s10Foundation4UUIDVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x38))();
      iVar3 = *(int *)(lVar6 + 0x14);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + iVar3));
      *(undefined **)(unaff_x20 + iVar3) = PTR___swiftEmptyArrayStorage_100995ea0;
      (**(code **)(lVar11 + 8))(lVar9,lVar5);
      puVar2 = (undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x18));
      _swift_bridgeObjectRelease(puVar2[1]);
      *puVar2 = 0;
      puVar2[1] = 0xe000000000000000;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      FUN_100040bb4(unaff_x20 + lVar12,&DAT_100a76718,&DAT_10080ccc0);
      (**(code **)(lVar11 + 0x38))(unaff_x20 + lVar12,1,1,lVar5);
      *(undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x2c)) = 1;
      return 1;
    }
    (**(code **)(lVar11 + 8))(lVar9,lVar5);
  }
  return 0;
}

