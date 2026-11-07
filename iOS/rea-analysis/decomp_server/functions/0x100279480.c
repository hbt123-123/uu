// rea decompile_all
// name: FUN_100279480
// address: 0x100279480
// body: available
// range: 0x100279480-0x1002796af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100279480(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = &DAT_100a82470;
  FUN_100004bb4(&DAT_100a82470,&DAT_100819d70);
  puVar9 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100277ad0();
  lVar11 = (long)puVar9 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100278368();
  uVar7 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar11 - uVar7;
  lVar12 = lVar10 - uVar7;
  FUN_100082394();
  lVar5 = lVar11;
  _swift_getEnumCaseMultiPayload(lVar11,lVar3);
  if ((int)lVar5 != 10) {
    FUN_1000d27dc(lVar11,FUN_100277ad0);
    lVar5 = 0;
    __sSS10FoundationE8EncodingVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,1,1,lVar5);
    return;
  }
  FUN_1000823d8(lVar11,lVar12,FUN_100278368);
  FUN_1000823d8(lVar12,lVar10,FUN_100278368);
  lVar5 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar4);
  iVar1 = (int)lVar5;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        lVar5 = 0;
        __sSS10FoundationE8EncodingVMa();
        lVar3 = *(long *)(lVar5 + -8);
        (**(code **)(lVar3 + 0x20))(puVar9,lVar10,lVar5);
        pcVar8 = *(code **)(lVar3 + 0x38);
        uVar6 = 0;
        goto LAB_100279644;
      }
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar10,lVar5);
    }
    else {
LAB_100279614:
      FUN_1000d27dc(lVar10,FUN_100278368);
    }
  }
  else if (1 < iVar1 - 6U) goto LAB_100279614;
  lVar5 = 0;
  __sSS10FoundationE8EncodingVMa();
  pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  uVar6 = 1;
LAB_100279644:
  (*pcVar8)(puVar9,uVar6,1,lVar5);
  FUN_1002796b0(puVar9,param_1);
  return;
}

