// rea decompile_all
// name: FUN_100327c08
// address: 0x100327c08
// body: available
// range: 0x100327c08-0x100327e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100327c08(long param_1,code *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  
  puVar2 = &DAT_100a85418;
  FUN_100004bb4(&DAT_100a85418,&DAT_100819868);
  lVar8 = *(long *)(puVar2 + -8);
  uVar11 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = auStack_70 + -uVar11;
  puVar3 = &DAT_100a85fb0;
  FUN_100004bb4(&DAT_100a85fb0,&DAT_10081a5b0);
  puVar9 = puVar6 + -(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_2)(puVar9,param_1);
  puVar4 = puVar9;
  (**(code **)(lVar8 + 0x30))(puVar9,1,puVar2);
  if ((int)puVar4 == 1) {
    FUN_100040bb4(puVar9,&DAT_100a85fb0,&DAT_10081a5b0);
  }
  else {
    FUN_1000a00a8(puVar9,puVar6,&DAT_100a85418,&DAT_100819868);
    puVar3 = &DAT_100a85fb8;
    FUN_100004bb4(&DAT_100a85fb8,&DAT_10081a5b8);
    lVar7 = *(long *)(puVar3 + -8);
    lVar10 = (long)puVar9 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar8 = lVar10 - uVar11;
    local_68 = puVar9;
    FUN_10007f314(puVar6,lVar8,&DAT_100a85418,&DAT_100819868);
    puVar5 = &DAT_100a85cf0;
    FUN_100004bb4(&DAT_100a85cf0,&DAT_10081a398);
    __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF(lVar10,lVar8,puVar5);
    (**(code **)(lVar7 + 8))(lVar10,puVar3);
    FUN_100040bb4(puVar6,&DAT_100a85418,&DAT_100819868);
    puVar9 = local_68;
  }
  iVar1 = *(int *)(puVar2 + 0x2c);
  puVar2 = &DAT_100a85420;
  FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
  lVar7 = (long)puVar9 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1 + iVar1,lVar7,&DAT_100a85420,&DAT_100819870);
  lVar8 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,puVar2);
  FUN_100040bb4(lVar7,&DAT_100a85420,&DAT_100819870);
  if ((int)lVar8 == 4) {
    FUN_100004bb4(&DAT_100a85cf0,&DAT_10081a398);
    __sScS12ContinuationV6finishyyF();
  }
  return;
}

