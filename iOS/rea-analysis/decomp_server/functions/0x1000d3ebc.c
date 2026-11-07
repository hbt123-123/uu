// rea decompile_all
// name: FUN_1000d3ebc
// address: 0x1000d3ebc
// body: available
// range: 0x1000d3ebc-0x1000d3fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1000d3ebc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    param_1[1] = param_2[1];
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar10 = (long)*(int *)(param_3 + 0x18);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    lVar11 = *(long *)(lVar6 + -8);
    puVar7 = (undefined1 *)((long)param_2 + lVar10);
    (**(code **)(lVar11 + 0x30))(puVar7,1,lVar6);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar11 + 0x10))
                ((undefined1 *)((long)param_1 + lVar10),(undefined1 *)((long)param_2 + lVar10),lVar6
                );
      (**(code **)(lVar11 + 0x38))((undefined1 *)((long)param_1 + lVar10),0,1,lVar6);
    }
    else {
      puVar8 = &DAT_100a76718;
      FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
      _memcpy((undefined1 *)((long)param_1 + lVar10),(undefined1 *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
    _swift_bridgeObjectRetain();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar6 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

