// rea decompile_all
// name: FUN_10018b860
// address: 0x10018b860
// body: available
// range: 0x10018b860-0x10018ba1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018b860(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  long local_58;
  
  puVar2 = &DAT_100a77e70;
  FUN_100004bb4(&DAT_100a77e70,&DAT_10080cca0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  lVar3 = 0;
  FUN_1000e49dc();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_1;
  (**(code **)(lVar8 + 0x30))(param_1,1,lVar3);
  if ((int)uVar5 == 1) {
    uVar4 = 0;
    FUN_100040bb4(param_1,&DAT_100a77e70,&DAT_10080cca0);
    thunk_FUN_1001a2c34(param_2);
    if ((uVar4 & 1) == 0) {
      uVar5 = 1;
    }
    else {
      iVar1 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      local_58 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_100064b10();
      }
      lVar7 = local_58;
      FUN_100192498(*(long *)(local_58 + 0x38) + *(long *)(lVar8 + 0x48) * param_2,puVar6);
      FUN_10006c92c(param_2,lVar7);
      uVar5 = 0;
      *unaff_x20 = lVar7;
    }
    (**(code **)(lVar8 + 0x38))(puVar6,uVar5,1,lVar3);
    FUN_100040bb4(puVar6,&DAT_100a77e70,&DAT_10080cca0);
  }
  else {
    FUN_100192498(param_1,lVar7);
    lVar3 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(lVar3);
    local_58 = *unaff_x20;
    FUN_100061d00(lVar7,param_2,lVar3);
    *unaff_x20 = local_58;
  }
  return;
}

