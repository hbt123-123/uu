// rea decompile_all
// name: FUN_100566ef4
// address: 0x100566ef4
// body: available
// range: 0x100566ef4-0x10056706b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100566ef4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  undefined1 auStack_68 [24];
  
  FUN_1004f6eac();
  if (unaff_x21 != 0) {
    return;
  }
  puVar5 = (undefined1 *)(param_1 + 0x10);
  puVar7 = auStack_68;
  _swift_beginAccess(puVar5,puVar7,0,0);
  uVar1 = *(ulong *)(param_1 + 0x10);
  puVar6 = *(undefined1 **)(param_1 + 0x18);
  uVar3 = uVar1 & 0xffffffffffff;
  if (((ulong)puVar6 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)puVar6 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    pcVar11 = *(code **)(param_4 + 0x70);
    _swift_bridgeObjectRetain(puVar6);
    puVar7 = puVar6;
    (*pcVar11)(uVar1,puVar6,1,param_3,param_4);
    _swift_bridgeObjectRelease();
    puVar5 = puVar6;
  }
  FUN_1004f6144();
  uVar4 = (uint)((ulong)puVar7 >> 0x20);
  uVar8 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar8 == 0) {
      puVar6 = puVar7;
      FUN_100006cdc();
      uVar3 = (ulong)puVar7 & 0xff000000000000;
      puVar7 = puVar6;
      if (uVar3 == 0) {
        return;
      }
    }
    else {
      puVar6 = puVar5;
      FUN_100006cdc();
      iVar9 = (int)puVar5;
      lVar10 = (long)puVar5 >> 0x20;
      puVar5 = puVar6;
      if (iVar9 == lVar10) {
        return;
      }
    }
  }
  else {
    if (uVar8 != 2) {
      FUN_100006cdc();
      return;
    }
    lVar10 = *(long *)(puVar5 + 0x10);
    lVar2 = *(long *)(puVar5 + 0x18);
    FUN_100006cdc();
    if (lVar10 == lVar2) {
      return;
    }
  }
  FUN_1004f6144();
  (**(code **)(param_4 + 0x78))();
  FUN_100006cdc(puVar5,puVar7);
  return;
}

