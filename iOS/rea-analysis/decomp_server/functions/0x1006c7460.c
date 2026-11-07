// rea decompile_all
// name: FUN_1006c7460
// address: 0x1006c7460
// body: available
// range: 0x1006c7460-0x1006c76a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006c7460(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  
  puVar1 = (ulong *)((long)param_1 + (param_4 - (long)param_2));
  if (param_3 <= puVar1) {
    puVar1 = param_3;
  }
  puVar3 = param_1;
  puVar5 = param_2;
  if (param_1 < (ulong *)((long)puVar1 - 7U)) {
    if (*param_2 == *param_1) {
      lVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
        if ((ulong *)((long)puVar1 - 7U) <= puVar3) goto LAB_1006c74e0;
        lVar6 = lVar6 + 8;
      } while (*puVar5 == *puVar3);
      uVar4 = *puVar3 ^ *puVar5;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = lVar6 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3);
    }
    else {
      uVar4 = *param_1 ^ *param_2;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = (ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3;
    }
  }
  else {
LAB_1006c74e0:
    if (puVar3 < (ulong *)((long)puVar1 - 3U)) {
      if ((int)*puVar5 == (int)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 4);
        puVar5 = (ulong *)((long)puVar5 + 4);
      }
      if (puVar3 < (ulong *)((long)puVar1 - 1U)) goto LAB_1006c7550;
    }
    else if (puVar3 < (ulong *)((long)puVar1 - 1U)) {
LAB_1006c7550:
      if ((short)*puVar5 == (short)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 2);
        puVar5 = (ulong *)((long)puVar5 + 2);
      }
    }
    if ((puVar3 < puVar1) && ((char)*puVar5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar4 = (long)puVar3 - (long)param_1;
  }
  if ((long)param_2 + uVar4 != param_4) {
    return uVar4;
  }
  puVar1 = (ulong *)((long)param_1 + uVar4);
  puVar3 = puVar1;
  if (puVar1 < (ulong *)((long)param_3 + -7)) {
    if (*param_5 != *puVar1) {
      uVar2 = *puVar1 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      return ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) + uVar4;
    }
    lVar6 = 0;
    puVar3 = (ulong *)(uVar4 + (long)param_1);
    while( true ) {
      puVar3 = puVar3 + 1;
      param_5 = param_5 + 1;
      if ((ulong *)((long)param_3 + -7) <= puVar3) break;
      lVar6 = lVar6 + 8;
      if (*param_5 != *puVar3) {
        uVar2 = *puVar3 ^ *param_5;
        uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        return lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) + uVar4;
      }
    }
  }
  if (puVar3 < (ulong *)((long)param_3 + -3)) {
    if ((int)*param_5 == (int)*puVar3) {
      puVar3 = (ulong *)((long)puVar3 + 4);
      param_5 = (ulong *)((long)param_5 + 4);
    }
    if ((ulong *)((long)param_3 + -1) <= puVar3) goto joined_r0x0001006c7684;
  }
  else if ((ulong *)((long)param_3 + -1) <= puVar3) goto joined_r0x0001006c7684;
  if ((short)*param_5 == (short)*puVar3) {
    puVar3 = (ulong *)((long)puVar3 + 2);
    param_5 = (ulong *)((long)param_5 + 2);
  }
joined_r0x0001006c7684:
  if ((puVar3 < param_3) && ((char)*param_5 == (char)*puVar3)) {
    puVar3 = (ulong *)((long)puVar3 + 1);
  }
  return (long)puVar3 + (uVar4 - (long)puVar1);
}

