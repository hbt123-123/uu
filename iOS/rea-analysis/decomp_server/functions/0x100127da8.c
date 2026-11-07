// rea decompile_all
// name: FUN_100127da8
// address: 0x100127da8
// body: available
// range: 0x100127da8-0x100127eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100127da8(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_44 [4];
  
  lVar4 = 0;
  FUN_100127240();
  FUN_10018ba1c((long)*(int *)(lVar4 + 0x20),0,param_1);
  FUN_10006d93c((long)*(int *)(lVar4 + 0x28),auStack_44,param_1);
  piVar1 = (int *)(unaff_x20 + *(int *)(lVar4 + 0x1c));
  if (((*(byte *)(piVar1 + 1) & 1) == 0) && (*piVar1 == (int)param_1)) {
    FUN_100040bb4();
    lVar5 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))();
    iVar3 = *(int *)(lVar4 + 0x14);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + iVar3));
    *(undefined **)(unaff_x20 + iVar3) = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar2 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x18));
    _swift_bridgeObjectRelease(puVar2[1]);
    *puVar2 = 0;
    puVar2[1] = 0xe000000000000000;
    *piVar1 = 0;
    *(undefined1 *)(piVar1 + 1) = 1;
    iVar3 = *(int *)(lVar4 + 0x24);
    FUN_100040bb4(unaff_x20 + iVar3,&DAT_100a76718,&DAT_10080ccc0);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(unaff_x20 + iVar3,1,1,lVar5);
    *(undefined1 *)(unaff_x20 + *(int *)(lVar4 + 0x2c)) = 0;
  }
  return;
}

