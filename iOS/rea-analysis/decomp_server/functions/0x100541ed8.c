// rea decompile_all
// name: FUN_100541ed8
// address: 0x100541ed8
// body: available
// range: 0x100541ed8-0x10054209f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100541ed8(void *param_1,void *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined1 auVar11 [16];
  void *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    pvVar9 = (void *)((ulong)param_1 & 0xffffffffffff);
    pvVar10 = (void *)((ulong)param_2 >> 0x38 & 0xf);
    pvVar4 = pvVar9;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      pvVar4 = pvVar10;
    }
    pvVar5 = pvVar4;
    _swift_slowAlloc(pvVar4,0xffffffffffffffff);
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
        if (param_1 == (void *)0x0) goto LAB_100541f60;
        if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100542098);
          (*pcVar2)();
        }
      }
      else {
        param_1 = (void *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        param_2 = pvVar9;
      }
      _memmove(pvVar5,param_1,(size_t)param_2);
    }
    else {
      local_68 = (void *)((ulong)param_2 & 0xffffffffffffff);
      local_70 = param_1;
      _memcpy(pvVar5,&local_70,(size_t)pvVar10);
    }
  }
  else {
    pvVar4 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
    uVar7 = 0xffffffffffffffff;
    pvVar5 = pvVar4;
    _swift_slowAlloc();
    uStack_58 = 0;
    local_60 = 0xf;
    pvVar9 = pvVar5;
    local_70 = param_1;
    local_68 = param_2;
    while (FUN_1005451f0(), pvVar10 = local_68, ((uint)uVar7 >> 8 & 1) == 0) {
      *(char *)((long)pvVar5 + (long)pvVar9) = (char)uVar7;
    }
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRelease(pvVar10);
  }
LAB_100541f60:
  _swift_beginAccess(unaff_x20 + 0x10,&local_70,0x21,0);
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  uVar3 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x10) = uVar8;
  uVar6 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
    FUN_100506e84(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(unaff_x20 + 0x10) = uVar6;
  }
  uVar3 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100506e84(uVar8,uVar3 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
  lVar1 = uVar8 + uVar3 * 0x10;
  *(void **)(lVar1 + 0x20) = pvVar5;
  *(long *)(lVar1 + 0x28) = (long)pvVar5 + (long)pvVar4;
  *(ulong *)(unaff_x20 + 0x10) = uVar8;
  _swift_endAccess(&local_70);
  auVar11._8_8_ = (long)pvVar5 + (long)pvVar4;
  auVar11._0_8_ = pvVar5;
  return auVar11;
}

