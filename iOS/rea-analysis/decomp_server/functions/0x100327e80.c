// rea decompile_all
// name: FUN_100327e80
// address: 0x100327e80
// body: available
// range: 0x100327e80-0x1003280ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100327e80(long param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long local_70;
  undefined1 *local_68;
  
  lVar2 = 0;
  __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
  lVar11 = *(long *)(lVar2 + -8);
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)&local_70 - uVar12;
  puVar3 = &DAT_100a85410;
  FUN_100004bb4(&DAT_100a85410,&DAT_100819860);
  puVar8 = (undefined1 *)
           (lVar9 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (*param_2)(puVar8,param_1);
  puVar4 = puVar8;
  (**(code **)(lVar11 + 0x30))(puVar8,1,lVar2);
  if ((int)puVar4 == 1) {
    FUN_100040bb4(puVar8,&DAT_100a85410,&DAT_100819860);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar8,lVar2);
    puVar3 = &DAT_100a85fa0;
    FUN_100004bb4(&DAT_100a85fa0,&DAT_10081a5a0);
    lVar6 = *(long *)(puVar3 + -8);
    lVar10 = (long)puVar8 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar7 = lVar10 - uVar12;
    local_70 = lVar10;
    local_68 = puVar8;
    (**(code **)(lVar11 + 0x10))(lVar7,lVar9,lVar2);
    puVar5 = &DAT_100a85d10;
    FUN_100004bb4(&DAT_100a85d10,&DAT_10081a3b8);
    __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF(lVar10,lVar7,puVar5);
    (**(code **)(lVar6 + 8))(lVar10,puVar3);
    (**(code **)(lVar11 + 8))(lVar9,lVar2);
    puVar8 = local_68;
  }
  puVar3 = &DAT_100a85418;
  FUN_100004bb4(&DAT_100a85418,&DAT_100819868);
  iVar1 = *(int *)(puVar3 + 0x2c);
  puVar3 = &DAT_100a85420;
  FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
  lVar9 = (long)puVar8 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1 + iVar1,lVar9,&DAT_100a85420,&DAT_100819870);
  lVar2 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,puVar3);
  FUN_100040bb4(lVar9,&DAT_100a85420,&DAT_100819870);
  if ((int)lVar2 == 4) {
    FUN_100004bb4(&DAT_100a85d10,&DAT_10081a3b8);
    __sScS12ContinuationV6finishyyF();
  }
  return;
}

