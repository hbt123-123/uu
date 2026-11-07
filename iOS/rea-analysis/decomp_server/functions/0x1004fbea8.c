// rea decompile_all
// name: FUN_1004fbea8
// address: 0x1004fbea8
// body: available
// range: 0x1004fbea8-0x1004fbfbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1004fbea8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar6 + 0x37U & 0xfffffffffffffff8) + 9 < 0x19)
  {
    (**(code **)(lVar3 + 0x10))(param_1);
    puVar5 = (undefined8 *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    uVar2 = puVar7[3];
    if (uVar2 < 0xffffffff) {
      uVar8 = puVar7[1];
      uVar4 = *puVar7;
      uVar10 = puVar7[3];
      uVar9 = puVar7[2];
      puVar5[4] = puVar7[4];
      puVar5[1] = uVar8;
      *puVar5 = uVar4;
      puVar5[3] = uVar10;
      puVar5[2] = uVar9;
    }
    else {
      puVar5[3] = uVar2;
      puVar5[4] = puVar7[4];
      (*(code *)**(undefined8 **)(uVar2 - 8))(puVar5,puVar7);
    }
    *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(puVar7 + 5);
    puVar5 = (undefined8 *)((long)param_1 + lVar6 + 0x37 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((long)param_2 + lVar6 + 0x37 & 0xfffffffffffffff8);
    uVar4 = *puVar7;
    *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar7 + 1);
    *puVar5 = uVar4;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}

