// rea decompile_all
// name: FUN_1003274c0
// address: 0x1003274c0
// body: available
// range: 0x1003274c0-0x1003275ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003274c0(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar3 = &DAT_100a85418;
  FUN_100004bb4(&DAT_100a85418,&DAT_100819868);
  iVar1 = *(int *)(puVar3 + 0x2c);
  puVar3 = &DAT_100a85420;
  FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
  puVar7 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_2 + iVar1,puVar7,&DAT_100a85420,&DAT_100819870);
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,puVar3);
  bVar2 = (int)puVar4 != 1;
  if (bVar2) {
    FUN_100040bb4(puVar7,&DAT_100a85420,&DAT_100819870);
    lVar5 = 0;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
    pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    lVar5 = 0;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
    lVar8 = *(long *)(lVar5 + -8);
    (**(code **)(lVar8 + 0x20))(param_1,puVar7,lVar5);
    pcVar6 = *(code **)(lVar8 + 0x38);
  }
  (*pcVar6)(param_1,bVar2,1,lVar5);
  return;
}

