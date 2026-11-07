// rea decompile_all
// name: FUN_100541b6c
// address: 0x100541b6c
// body: available
// range: 0x100541b6c-0x100541caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100541b6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x21;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 *local_98;
  undefined8 local_90;
  
  lVar7 = *unaff_x20;
  lVar4 = *(long *)(lVar7 + 0x50);
  lVar2 = 0;
  local_98 = param_1;
  local_90 = param_4;
  __sSqMa(0,lVar4);
  lVar9 = *(long *)(lVar2 + -8);
  puVar5 = auStack_a0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar7 + 0x60);
  pcVar6 = *(code **)(lVar7 + 0x40);
  _swift_retain();
  (*pcVar6)(puVar5,&stack0xffffffffffffff78,param_2,param_3,local_90,lVar4,lVar7);
  puVar1 = local_98;
  if (unaff_x21 == 0) {
    lVar8 = *(long *)(lVar4 + -8);
    puVar3 = puVar5;
    (**(code **)(lVar8 + 0x30))(puVar5,1,lVar4);
    if ((int)puVar3 == 1) {
      (**(code **)(lVar9 + 8))(puVar5,lVar2);
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
    }
    else {
      puVar1[3] = lVar4;
      puVar1[4] = *(undefined8 *)(lVar7 + 0x10);
      FUN_1000efc08(puVar1);
      (**(code **)(lVar8 + 0x20))();
    }
  }
  return;
}

