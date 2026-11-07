// rea decompile_all
// name: FUN_100551198
// address: 0x100551198
// body: available
// range: 0x100551198-0x10055134b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100551198(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x21;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar1 = (undefined1 *)0x0;
  __sSqMa(0,param_2);
  lVar8 = *(long *)(puVar1 + -8);
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = &stack0xffffffffffffffa0 + -uVar3;
  puVar6 = puVar7 + -uVar3;
  puVar2 = puVar1;
  FUN_10055edb4();
  if (unaff_x21 != 0) {
    return;
  }
  if ((param_4 & 1) == 0) {
    FUN_10050f584(puVar6);
    lVar5 = *(long *)(param_2 + -8);
    puVar2 = puVar6;
    (**(code **)(lVar5 + 0x30))(puVar6,1,param_2);
    puVar7 = puVar6;
    if ((int)puVar2 != 1) {
LAB_100551330:
      (**(code **)(lVar5 + 0x20))(param_1,puVar7,param_2);
      return;
    }
    pcVar4 = *(code **)(lVar8 + 8);
  }
  else {
    FUN_10055e368();
    if (puVar2 != (undefined1 *)(long)(int)puVar2) {
      FUN_1004f9b10();
      _swift_allocError(&DAT_1009d1c98,puVar2,0,0);
      *puVar2 = 0;
      goto LAB_1005512d4;
    }
    (**(code **)(param_3 + 0x20))(puVar7);
    lVar5 = *(long *)(param_2 + -8);
    puVar2 = puVar7;
    (**(code **)(lVar5 + 0x30))(puVar7,1,param_2);
    if ((int)puVar2 != 1) goto LAB_100551330;
    pcVar4 = *(code **)(lVar8 + 8);
    puVar6 = puVar7;
  }
  (*pcVar4)(puVar6,puVar1);
  FUN_1004f9b10();
  _swift_allocError(&DAT_1009d1c98,puVar6,0,0);
  *puVar6 = 8;
LAB_1005512d4:
  _swift_willThrow();
  return;
}

