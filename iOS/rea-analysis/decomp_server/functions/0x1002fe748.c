// rea decompile_all
// name: FUN_1002fe748
// address: 0x1002fe748
// body: available
// range: 0x1002fe748-0x1002fe98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fe748(long param_1,code *param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = &DAT_100a85410;
  FUN_100004bb4(&DAT_100a85410,&DAT_100819860);
  lVar9 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  puVar6 = &stack0xffffffffffffffa0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a85418;
  FUN_100004bb4(&DAT_100a85418,&DAT_100819868);
  iVar1 = *(int *)(puVar3 + 0x2c);
  puVar3 = &DAT_100a85420;
  FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
  lVar7 = (long)puVar6 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1 + iVar1,lVar7,&DAT_100a85420,&DAT_100819870);
  lVar4 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,puVar3);
  bVar2 = (int)lVar4 != 1;
  if (bVar2) {
    FUN_100040bb4(lVar7,&DAT_100a85420,&DAT_100819870);
    lVar4 = 0;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
    pcVar5 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar4 = 0;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
    lVar8 = *(long *)(lVar4 + -8);
    (**(code **)(lVar8 + 0x20))(puVar6,lVar7,lVar4);
    pcVar5 = *(code **)(lVar8 + 0x38);
  }
  (*pcVar5)(puVar6,bVar2,1,lVar4);
  lVar7 = lVar7 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(puVar6,lVar7,&DAT_100a85410,&DAT_100819860);
  __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa(0);
  lVar8 = *(long *)(lVar4 + -8);
  lVar9 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar9 == 1) {
    FUN_100040bb4(puVar6,&DAT_100a85410,&DAT_100819860);
  }
  else {
    lVar9 = lVar7 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x20))(lVar9,lVar7,lVar4);
    (*param_2)(lVar9);
    (**(code **)(lVar8 + 8))(lVar9,lVar4);
    FUN_100040bb4(puVar6,&DAT_100a85410,&DAT_100819860);
  }
  return;
}

