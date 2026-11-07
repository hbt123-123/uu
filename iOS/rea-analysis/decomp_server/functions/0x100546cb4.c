// rea decompile_all
// name: FUN_100546cb4
// address: 0x100546cb4
// body: available
// range: 0x100546cb4-0x100546ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100546cb4(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  long local_68;
  
  puVar1 = (undefined1 *)0x0;
  __sSqMa(0,param_4);
  lVar8 = *(long *)(puVar1 + -8);
  puVar4 = auStack_80 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) == 0) {
    FUN_100548074();
    if (local_68 == 0) {
      lVar8 = *(long *)(param_4 + -8);
      (**(code **)(lVar8 + 8))(param_1,param_4);
      FUN_100040bb4(auStack_80,&DAT_100aaa408,&DAT_1008360c8);
      pcVar6 = *(code **)(lVar8 + 0x10);
    }
    else {
      puVar2 = &DAT_100aaa408;
      FUN_100040bb4(auStack_80,&DAT_100aaa408,&DAT_1008360c8);
      FUN_100548074();
      FUN_100004bb4(&DAT_100aaa408,&DAT_1008360c8);
      puVar3 = puVar4;
      _swift_dynamicCast(puVar4,auStack_80,puVar2,param_4,6);
      lVar7 = *(long *)(param_4 + -8);
      if ((int)puVar3 == 0) {
        (**(code **)(lVar7 + 0x38))(puVar4,1,1,param_4);
        (**(code **)(lVar8 + 8))(puVar4,puVar1);
        FUN_1005480d0();
        _swift_allocError(&DAT_1009d10f0,puVar4,0,0);
        uVar5 = 0;
        goto LAB_100546d3c;
      }
      (**(code **)(lVar7 + 8))(param_1,param_4);
      (**(code **)(lVar7 + 0x38))(puVar4,0,1,param_4);
      pcVar6 = *(code **)(lVar7 + 0x20);
      param_2 = puVar4;
    }
    (*pcVar6)(param_1,param_2,param_4);
  }
  else {
    FUN_1005480d0();
    _swift_allocError(&DAT_1009d10f0,puVar1,0,0);
    uVar5 = 1;
    puVar4 = puVar1;
LAB_100546d3c:
    *puVar4 = uVar5;
    _swift_willThrow();
  }
  return;
}

